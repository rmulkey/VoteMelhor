//
//  FirstViewController.m
//  VoteMelhor
//
//  Created by Mulkey, Rodrigo S. on 3/20/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import "FirstViewController.h"

@interface FirstViewController ()

@property (nonatomic, strong) NSURLSession *session;

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self getCandidateInfo];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) getCandidateInfo {
    
    
    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];
   
    NSString *stringURL = [NSString stringWithFormat:@"http://api.transparencia.org.br/api/v1/candidatos?estado=sp&cargo=3"];
    
    NSURL *url = [NSURL URLWithString:stringURL];
    
    [[_session dataTaskWithURL:url completionHandler:^(NSData
                                                       *data, NSURLResponse *response, NSError *error) {
        if (!error) {
            NSHTTPURLResponse *httpResp =
            (NSHTTPURLResponse*) response;
            if (httpResp.statusCode == 200) {
                
                NSError *jsonError;
                NSArray *filesJSON = [NSJSONSerialization
                                      JSONObjectWithData:data
                                      options:NSJSONReadingAllowFragments
                                      error:&jsonError];
                NSMutableArray *dbFiles =
                [[NSMutableArray alloc] init];
                
                if (!jsonError) {
                    for (NSDictionary *fileMetadata in
                         filesJSON) {
                        
                        NSLog(@"data: %@", fileMetadata);
                        
                    }
                    
                    [dbFiles sortUsingComparator:^NSComparisonResult(id obj1, id obj2) {
                        return [obj1 compare:obj2];
                    }];
                    
                    dispatch_async(dispatch_get_main_queue(), ^{
                        [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
                        //[self.tableView reloadData];
                    });
                }
            } else {
                NSLog(@"%@", error);
            }
        } else {
            NSLog(@"%@", error);
        }
    }] resume];

}

@end
