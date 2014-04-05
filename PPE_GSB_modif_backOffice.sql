-- Script : Modification de la base pour la gestion d'utilisateur pour l'application du back office (partie de la BDD intérrogé par Qt).
-- Auteur : F.Pignoly
-- Date création : 03/10/2013
-- Date modification : 03/10/2013

-- Ajout d'une table "UTILISATEUR"
CREATE TABLE UTILISATEUR
(
UTI_LOGIN	varchar(50),
UTI_MDP		varchar(50),
PRIMARY KEY(UTI_LOGIN)
)
engine=innodb;
