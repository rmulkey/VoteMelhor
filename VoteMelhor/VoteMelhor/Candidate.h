//
//  Candidato.h
//  VoteMelhor
//
//  Created by Mulkey, Rodrigo S. on 3/20/16.
//  Copyright © 2016 Mulkey, Rodrigo S. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Candidate : NSObject {
    
    NSString *;
    NSString *nickName
}

@end


Candidate {
    id (string, optional): Identificador do candidato,
        apelido (string, optional): Apelido do candidato,
            nome (string, optional): Nome do candidato,
                numero (string, optional): Número do candidato na eleição atual,
                    titulo (string, optional): Número do título eleitoral do candidato,
                        CPF (string, optional): Número do Cadastro de Pessoas Físicas, sem formatação,
                            matricula (string, optional): Matrícula do candidato no sistema interno do TSE,
                                cargo (string, optional): Cargo pelo qual concorre,
                                estado (string, optional): Estado da federação pelo qual concorre,
                                partido (string, optional): Partido pelo qual concorre,
                                idade (string, optional): Idade do candidato,
                                    instrucao (string, optional): Grau de instrução, por exemplo, 'superior completo',
                                    ocupacao (string, optional): Qual a ocupação atual do candidato, por exemplo, 'médico',
                                        miniBio (string, optional): Dados pessoais sobre o candidato (somente para candidatos a presidente, governador, deputado federal, senador pelo Paraná e por quem esteja em exercício na câmara ou senado),
                                        cargos (string, optional): Histórico dos cargos públicos que o candidato ocupou em sua carreira (somente para candidatos a presidente, governador, deputado federal, senador pelo Paraná e por quem esteja em exercício na câmara ou senado),
                                        previsao (string, optional): Custo previsto da campanha. Essa informação não é totalmente confiável,
                                        bancadas (string, optional): Bancadas as quais o candidato pertence. Caso não pertença a nenhuma bancada, esse atributo será vazio. Esses dados existem para candidatos a presidente, governador, deputado federal, senador pelo Paraná e por quem esteja em exercício na câmara ou senado,
                                        processos (string, optional): Processos que o candidato responde na Justiça ou Tribunais de Contas (somente para candidatos a presidente, governador, deputado federal, senador pelo Paraná e por quem esteja em exercício na câmara ou senado). Texto formatado, com links, separados por ,
                                        casaAtual (string, optional): Indica se o candidato está em exercício na Câmara dos Deputados ou no Senado Federal (retorna 1, se em exercício na Câmara e 2 se em exercício no Senado),
                                        reeleicao (boolean, optional): Indica se o candidato está tentando a reeleição para o mesmo cargo.,
                                        foto (string, optional): Link para a foto oficial do candidato no site do TSE
                                            }

