//
//  RequestManager.h
//  VoteMelhor
//
//  Created by Mulkey, Rodrigo S. on 3/20/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import <Foundation/Foundation.h>


// Examples: http://dev.transparencia.org.br/api-portal/exemplos

#define kBaseURL @"http://api.transparencia.org.br/api/v1"

#define kGetCandidates @"/candidatos"
#define kGetCandidatesByID @"/candidatos/%@" //ID

/*
Candidatos : Operações relacionadas aos candidatos Expand Operations Raw
GET /candidatos Retorna uma lista de candidatos.
GET /candidatos/{id} Retorna um candidato específico, de acordo com o seu 'id'
GET /candidatos/{id}/bens Retorna a relação de bens declarados do candidato
GET /candidatos/{id}/doadores Doações feitas para uma determinada campanha
GET /candidatos/{id}/candidaturas Informações sobre candidaturas passadas do candidado
GET /candidatos/{id}/estatisticas Informações estatísticas sobre os candidados
*/

@interface RequestManager : NSObject

@end
