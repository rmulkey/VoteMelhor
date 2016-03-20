//
//  Candidato.h
//  VoteMelhor
//
//  Created by Mulkey, Rodrigo S. on 3/20/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Candidate : NSObject {
    
    NSString *ID;
    NSString *nickName;
    NSString *name;
    NSNumber *number; //2 digits number in the elections
    NSNumber *title; //Número do título de eleitor
    NSString *CPFNumber;
    NSString *matricula; //Matrícula do candidato no sistema interno do TSE
    NSString *position; //Cargo i.e. Deputado
    NSString *state;
    NSString *party; //Partido
    NSString *age;
    NSString *education; //grau de instrução i.e. 'Superior Completo'
    NSString *ocupation; //Ocupação profissional i.e. 'Médico'
    NSString *miniBio; //Dados pessoais do candidato
    NSMutableArray *positions; // Histórico dos Cargos Ocupados
    
}

@end

