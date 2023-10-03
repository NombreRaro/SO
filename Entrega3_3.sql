SQL_Proyecto 0.0


DROP DATABASE IF EXISTS Registro;
CREATE DATABASE Registro;
USE Registro;

CREATE TABLE Jugador (
username VARCHAR(30),
password VARCHAR(30)
) engine = InnoDB;

CREATE TABLE Partida (
identificador INTEGER PRIMARY KEY NOT NULL,
año INTEGER PRIMARY KEY NOT NULL,
mes INTEGER PRIMARY KEY NOT NULL,
dia INTEGER PRIMARY KEY NOT NULL,
hora INTEGER PRIMARY KEY NOT NULL,
minuto INTEGER PRIMARY KEY NOT NULL,
duración INTEGER PRIMARY KEY NOT NULL,
ganador VARCHAR(30)
)ENGINE = InnoDB;
--La duracion en minutos

-- La siguiente sección está por terminar, se deja como comentario para trabajar en ella más adelante
-- CREATE TABLE Participacion (
-- Jugador TEXT NOT NULL,
-- Partida INTEGER NOT NULL

INSERT INTO Jugador VALUES ('juanito123', 'macarrones1');
INSERT INTO Jugador VALUES ('badbunibeibe', 'elreggaetonesunamierda');

INSERT INTO Partida VALUES (1,2023,10,1,18,0,5);
INSERT INTO Partida VALUES (2,2023,10,1,18,10,6);
INSERT INTO Partida VALUES (3,2023,10,2,11,30,8);
 