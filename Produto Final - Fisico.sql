CREATE DATABASE Fisico;
USE Fisico;
CREATE TABLE Jogador 
( 
 CPF INT PRIMARY KEY,  
 id_clube INT,  
 RG INT,  
 Data_de_Nascimento DATE,  
 Nome VARCHAR(25)  
); 

CREATE TABLE Treino 
( 
 id_treino INT PRIMARY KEY,  
 Descrição_do_Treino DATE,  
 Tempo_de_Duração INT,  
 Nome VARCHAR(25)  
);

CREATE TABLE Jogador_Treino 
( 
 CPF INT,
 id_treino INT,
 PRIMARY KEY (CPF, id_treino),
 FOREIGN KEY (CPF) REFERENCES Jogador(CPF),
 FOREIGN KEY (id_treino) REFERENCES Treino(id_treino)
); 

CREATE TABLE Clube 
( 
 id_clube INT PRIMARY KEY,  
 Data_de_Fundação DATE,  
 Diretor VARCHAR(25),  
 Nome VARCHAR(25) 
); 

ALTER TABLE Jogador ADD FOREIGN KEY(id_clube) REFERENCES Clube (id_clube);

DROP DATABASE Fisico;