-- MySQL dump 10.13  Distrib 5.1.73, for debian-linux-gnu (i486)
--
-- Host: localhost    Database: db_gestionCR
-- ------------------------------------------------------
-- Server version	5.1.73-1-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `ACTIVITE_COMPL`
--

DROP TABLE IF EXISTS `ACTIVITE_COMPL`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ACTIVITE_COMPL` (
  `AC_CODE` int(11) NOT NULL,
  `AC_DATE` date DEFAULT NULL,
  `AC_LIEU` varchar(50) DEFAULT NULL,
  `AC_THEME` varchar(20) DEFAULT NULL,
  `AC_MOTIF` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`AC_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ACTIVITE_COMPL`
--

LOCK TABLES `ACTIVITE_COMPL` WRITE;
/*!40000 ALTER TABLE `ACTIVITE_COMPL` DISABLE KEYS */;
/*!40000 ALTER TABLE `ACTIVITE_COMPL` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `AFFECTATION`
--

DROP TABLE IF EXISTS `AFFECTATION`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `AFFECTATION` (
  `PRA_CODE` int(11) NOT NULL DEFAULT '0',
  `CAB_CODE` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`PRA_CODE`,`CAB_CODE`),
  KEY `CAB_CODE` (`CAB_CODE`),
  CONSTRAINT `AFFECTATION_ibfk_1` FOREIGN KEY (`PRA_CODE`) REFERENCES `PRATICIEN` (`PRA_CODE`),
  CONSTRAINT `AFFECTATION_ibfk_2` FOREIGN KEY (`CAB_CODE`) REFERENCES `CABINET` (`CAB_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `AFFECTATION`
--

LOCK TABLES `AFFECTATION` WRITE;
/*!40000 ALTER TABLE `AFFECTATION` DISABLE KEYS */;
INSERT INTO `AFFECTATION` VALUES (1,1),(2,2),(3,3),(4,4),(5,5),(6,6),(7,7),(8,8),(9,9),(10,10),(11,11),(12,12),(13,13),(14,14),(15,15),(16,16),(17,17),(18,18),(19,19),(20,20),(21,21),(22,22),(23,23),(24,24),(25,25),(26,26),(27,27),(28,28),(29,29),(30,30),(31,31),(32,32),(33,33),(34,34),(35,35),(36,36),(37,37),(38,38),(39,39),(40,40),(41,41),(42,42),(43,43),(44,44),(45,45),(46,46),(47,47),(48,48),(49,49),(50,50),(51,51),(52,52),(53,53),(54,54),(55,55),(56,56),(57,57),(58,58),(59,59),(61,61),(62,62),(63,63),(64,64),(65,65),(66,66),(67,67),(68,68),(69,69),(70,70),(71,71),(72,72),(73,73),(74,74),(75,75),(76,76),(77,77),(78,78),(79,79),(80,80),(81,81),(82,82),(83,83),(84,84),(85,85),(86,86);
/*!40000 ALTER TABLE `AFFECTATION` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `CABINET`
--

DROP TABLE IF EXISTS `CABINET`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CABINET` (
  `CAB_CODE` int(11) NOT NULL,
  `CAB_ADRESSE` varchar(30) DEFAULT NULL,
  `CAB_CP` varchar(5) DEFAULT NULL,
  `CAB_VILLE` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`CAB_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `CABINET`
--

LOCK TABLES `CABINET` WRITE;
/*!40000 ALTER TABLE `CABINET` DISABLE KEYS */;
INSERT INTO `CABINET` VALUES (1,'114 r Authie','85000','LA ROCHE SUR YON'),(2,'13 r Devon','41000','BLOIS'),(3,'36 av 6 Juin','25000','BESANCON'),(4,'47 av Robert Schuman','60000','BEAUVAIS'),(5,'31 r St Jean','30000','NIMES'),(6,'27 r Auvergne','80000','AMIENS'),(7,'1 r Albert de Mun','29000','MORLAIX'),(8,'31 r St Jean','68000','MULHOUSE'),(9,'9 r Demolombe','34000','MONTPELLIER'),(10,'31 r St Jean','59000','LILLE'),(11,'86Bis r Basse','67000','STRASBOURG'),(12,'94 r Falaise','10000','TROYES'),(13,'21 r Chateaubriand','75000','PARIS'),(14,'4 av GÃ©n Laperrine','45000','ORLEANS'),(15,'92 r Falaise','6000','NICE'),(16,'14 av ThiÃ¨s','6000','NICE'),(17,'5 av Ste ThÃ©rÃ¨se','11000','NARBONNE'),(18,'9 av 1Ã¨re ArmÃ©e FranÃ§aise','35000','RENNES'),(19,'98 bd Mar Lyautey','44000','NANTES'),(20,'29 r Lucien Nelle','87000','LIMOGES'),(21,'9 r Demolombe','49100','ANGERS'),(22,'51 r BerniÃ¨res','29000','QUIMPER'),(23,'11 r Pasteur','35000','RENNES'),(24,'9 r Demolombe','41000','BLOIS'),(25,'9 r Vaucelles','33000','BORDEAUX'),(26,'29 r Lucien Nelle','19000','TULLE'),(27,'2 pl Wurzburg','55000','VERDUN'),(28,'29 av 6 Juin','56000','VANNES'),(29,'BÃ¢t A 90 r Bayeux','70000','VESOUL'),(30,'172 r CaponiÃ¨re','70000','VESOUL'),(31,'27 r Auvergne','75000','PARIS'),(32,'8 r Gaillon','86000','POITIERS'),(33,'47 av Robert Schuman','64000','PAU'),(34,'30 r Authie','8000','SEDAN'),(35,'7 pl St Gilles','62000','ARRAS'),(36,'22 r Jules Verne','76000','ROUEN'),(37,'1 r Albert de Mun','38100','VIENNE'),(38,'26 r HÃ©rouville','69000','LYON'),(39,'5 r Pierre Girard','71000','CHALON SUR SAONE'),(40,'7 pl St Gilles','28000','CHARTRES'),(41,'4 rÃ©sid Olympia','2000','LAON'),(42,'51 pl Ancienne Boucherie','14000','CAEN'),(43,'35 r Auguste Lechesne','18000','BOURGES'),(44,'7 pl St Gilles','29000','BREST'),(45,'9 r Clos Caillet','79000','NIORT'),(46,'43 bd GÃ©n Vanier','77000','MARNE LA VALLEE'),(47,'46 r Eglise','17000','SAINTES'),(48,'178 r Auge','54000','NANCY'),(49,'6 av 6 Juin','39000','DOLE'),(50,'5 rÃ©sid Prairie','50000','SAINT LO'),(51,'36 av 6 Juin','72000','LA FERTE BERNARD'),(52,'69 av Charlemagne','21000','DIJON'),(53,'3 pl Champlain','94000','BOISSY SAINT LEGER'),(54,'31 av 6 Juin','52000','CHAUMONT'),(55,'10 av 1Ã¨re ArmÃ©e FranÃ§aise','86000','CHATELLEREAULT'),(56,'3 r Hastings','15000','AURRILLAC'),(57,'31 r St Jean','93000','BOBIGNY'),(58,'114 r Authie','49100','SAUMUR'),(59,'14 av ThiÃ¨s','13000','MARSEILLE'),(60,'rÃ©sid St PÃ¨res 55 r PigaciÃ¨','54000','NANCY'),(61,'47 av Robert Schuman','37000','TOURS'),(62,'22 r Puits Picard','74000','ANNECY'),(63,'14 av ThiÃ¨s','10000','CHALON EN CHAMPAGNE'),(64,'7 pl St Gilles','12000','RODEZ'),(65,'114 r Authie','34000','MONTPELLIER'),(66,'15 r MÃ©lingue','44000','CLISSON'),(67,'1 r Albert de Mun','81000','ALBI'),(68,'8 r Gaillon','31000','TOULOUSE'),(69,'63 av ThiÃ¨s','23000','MONTLUCON'),(70,'22 r Jean Romain','40000','MONT DE MARSAN'),(71,'39 av 6 Juin','57000','METZ'),(72,'39 av 6 Juin','82000','MONTAUBAN'),(73,'43 bd GÃ©n Vanier','48000','MENDE'),(74,'9 r Vaucelles','13000','MARSEILLE'),(75,'11 r Boutiques','67000','STRASBOURG'),(76,'45 r Boutiques','61000','ALENCON'),(77,'26 r HÃ©rouville','46000','FIGEAC'),(78,'39 av 6 Juin','27000','DREUX'),(79,'15 bd Richemond','2000','SOISSON'),(80,'98 bd Mar Lyautey','88000','EPINAL'),(81,'14 av ThiÃ¨s','7000','PRIVAS'),(82,'92 r Falaise','42000','SAINT ETIENNE'),(83,'7 r Desmoueux','38100','GRENOBLE'),(84,'219 r CaponiÃ¨re','9000','FOIX'),(85,'130 r St Jean','33000','LIBOURNE'),(86,'34 r Demolombe','53000','MAYENNE');
/*!40000 ALTER TABLE `CABINET` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `COMPOSANT`
--

DROP TABLE IF EXISTS `COMPOSANT`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `COMPOSANT` (
  `CMP_CODE` varchar(8) NOT NULL,
  `CMP_LIBELLE` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`CMP_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `COMPOSANT`
--

LOCK TABLES `COMPOSANT` WRITE;
/*!40000 ALTER TABLE `COMPOSANT` DISABLE KEYS */;
/*!40000 ALTER TABLE `COMPOSANT` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `CONSTITUER`
--

DROP TABLE IF EXISTS `CONSTITUER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CONSTITUER` (
  `MED_DEPOTLEGAL` varchar(20) NOT NULL DEFAULT '',
  `CMP_CODE` varchar(8) NOT NULL DEFAULT '',
  `CST_QTE` float DEFAULT NULL,
  PRIMARY KEY (`MED_DEPOTLEGAL`,`CMP_CODE`),
  KEY `CMP_CODE` (`CMP_CODE`),
  CONSTRAINT `CONSTITUER_ibfk_1` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`),
  CONSTRAINT `CONSTITUER_ibfk_2` FOREIGN KEY (`CMP_CODE`) REFERENCES `COMPOSANT` (`CMP_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `CONSTITUER`
--

LOCK TABLES `CONSTITUER` WRITE;
/*!40000 ALTER TABLE `CONSTITUER` DISABLE KEYS */;
/*!40000 ALTER TABLE `CONSTITUER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `DELEGUE`
--

DROP TABLE IF EXISTS `DELEGUE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `DELEGUE` (
  `DEL_CODE` varchar(20) NOT NULL DEFAULT '',
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`DEL_CODE`,`VIS_MATRICULE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`),
  CONSTRAINT `DELEGUE_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `DELEGUE`
--

LOCK TABLES `DELEGUE` WRITE;
/*!40000 ALTER TABLE `DELEGUE` DISABLE KEYS */;
INSERT INTO `DELEGUE` VALUES ('d01','e22'),('d02','t82');
/*!40000 ALTER TABLE `DELEGUE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `DEPARTEMENT`
--

DROP TABLE IF EXISTS `DEPARTEMENT`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `DEPARTEMENT` (
  `DEP_CODE` varchar(3) NOT NULL,
  `DEP_NOM` varchar(30) DEFAULT NULL,
  `DEP_CHEFVENTE` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`DEP_CODE`),
  KEY `DEP_CHEFVENTE` (`DEP_CHEFVENTE`),
  CONSTRAINT `DEPARTEMENT_ibfk_1` FOREIGN KEY (`DEP_CHEFVENTE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `DEPARTEMENT`
--

LOCK TABLES `DEPARTEMENT` WRITE;
/*!40000 ALTER TABLE `DEPARTEMENT` DISABLE KEYS */;
INSERT INTO `DEPARTEMENT` VALUES ('01','Ain','a17'),('02','Aisne','a17'),('03','Allier','a17'),('05','Alpes (Hautes)',NULL),('06','Alpes Maritimes','a17'),('07','ArdÃ©che','a17'),('08','Ardennes','a17'),('09',' AriÃ©ge','a17'),('10','Aube','a17'),('11','Aude','a17'),('12','Aveyron','e22'),('13','Bouches du RhÃ´ne','e22'),('14','Calvados','e22'),('15','Cantal','e22'),('16','Charente','e22'),('17','Charente Maritime','e22'),('18','Cher','e22'),('19','CorrÃ©ze','e22'),('21','CÃ´te d\'or','f39'),('22','CÃ´tes d\'armor','f39'),('23','Creuse ','e22'),('24','Dordogne','e22'),('25','Doubs','e22'),('26','DrÃ´me','e22'),('27','Eure','a17'),('28','Eure et Loir','l56'),('29','FinistÃ©re','l56'),('2A','Corse du sud','f39'),('2B','Haute corse','f39'),('30','Gard','l56'),('31','Garonne (Haute)','l56'),('32','Gers','l56'),('33','Gironde','l56'),('34','HÃ©rault','l56'),('35','Ile et Vilaine','l56'),('36','Indre','l56'),('37','Indre et Loire','l56'),('38','IsÃ©re','l56'),('39','Jura','l56'),('40','Landes','f39'),('41','Loir et Cher','f39'),('42','Loire','f39'),('43','Loire (Haute)','f39'),('44','Loire Atlantique','f39'),('45','Loiret','f39'),('46','Lot','f39'),('47','Lot et Garonne','f39'),('48','LozÃ©re','f39'),('49','Maine et Loire','f39'),('50','Manche','f39'),('51','Marne','f39'),('52','Marne (Haute)','f39'),('53','Mayenne','f39'),('54','Meurthe et Moselle','f39'),('55','Meuse','f39'),('56','Morbihan','f39'),('57','Moselle','f39'),('58','NiÃ©vre','f39'),('59','Nord','f39'),('60','Oise','f39'),('61','Orne','f39'),('62','Pas de Calais','f39'),('63','Puy de DÃ´me','f39'),('64','PyrÃ©nÃ©es Atlantiques','f39'),('65','PyrÃ©nÃ©es (Hautes)','f39'),('66','PyrÃ©nÃ©es Orientales','f39'),('67','Rhin (Bas)','f39'),('68','Rhin (Haut)','f39'),('69','RhÃ´ne','f39'),('70','SaÃ´ne (Haute)','f39'),('71','SaÃ´ne et Loire','f39'),('72','Sarthe','f39'),('73','Savoie','f39'),('74','Savoie (Haute)','f39'),('75','Paris','f39'),('76','Seine Maritime','f39'),('77','Seine et Marne','f39'),('78','Yvelines','f39'),('79','SÃ¨vres (Deux)','f39'),('80','Somme','f39'),('81','Tarn','f39'),('82','Tarn et Garonne','f39'),('83','Var','f39'),('84','Vaucluse','f39'),('85','VendÃ©e','f39'),('86','Vienne','f39'),('87','Vienne (Haute)','f39'),('88','Vosges','f39'),('89','Yonne','f39'),('90','Belfort (Territoire de)','f39'),('91','Essonne','f39'),('92','Hauts de Seine','f39'),('93','Seine Saint Denis','f39'),('94','Val de Marne','f39'),('95','Val d\'oise','f39'),('971','Guadeloupe','f39'),('972','Martinique','f39'),('973','Guyane','f39'),('974','RÃ©union','f39'),('976','Mayotte','f39');
/*!40000 ALTER TABLE `DEPARTEMENT` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `DOSAGE`
--

DROP TABLE IF EXISTS `DOSAGE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `DOSAGE` (
  `DOS_CODE` varchar(20) NOT NULL,
  `DOS_QUANTITE` varchar(20) DEFAULT NULL,
  `DOS_UNITE` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`DOS_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `DOSAGE`
--

LOCK TABLES `DOSAGE` WRITE;
/*!40000 ALTER TABLE `DOSAGE` DISABLE KEYS */;
/*!40000 ALTER TABLE `DOSAGE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ECHANTILLIONS_DISTRIBUES`
--

DROP TABLE IF EXISTS `ECHANTILLIONS_DISTRIBUES`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ECHANTILLIONS_DISTRIBUES` (
  `ECH_CODE` int(11) NOT NULL DEFAULT '0',
  `ECH_DEMANDEMENSUEL` int(11) DEFAULT NULL,
  `ECH_ATTRIBUTIONMENSUEL` int(11) DEFAULT NULL,
  `ECH_MOIS` varchar(6) DEFAULT NULL,
  `VIS_MATRICULE` varchar(20) DEFAULT NULL,
  `MED_DEPOTLEGAL` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`ECH_CODE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`),
  KEY `MED_DEPOTLEGAL` (`MED_DEPOTLEGAL`),
  CONSTRAINT `ECHANTILLIONS_DISTRIBUES_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`),
  CONSTRAINT `ECHANTILLIONS_DISTRIBUES_ibfk_2` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ECHANTILLIONS_DISTRIBUES`
--

LOCK TABLES `ECHANTILLIONS_DISTRIBUES` WRITE;
/*!40000 ALTER TABLE `ECHANTILLIONS_DISTRIBUES` DISABLE KEYS */;
/*!40000 ALTER TABLE `ECHANTILLIONS_DISTRIBUES` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `FAMILLE`
--

DROP TABLE IF EXISTS `FAMILLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `FAMILLE` (
  `FAM_CODE` varchar(6) NOT NULL,
  `FAM_LIBELLE` varchar(160) DEFAULT NULL,
  PRIMARY KEY (`FAM_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `FAMILLE`
--

LOCK TABLES `FAMILLE` WRITE;
/*!40000 ALTER TABLE `FAMILLE` DISABLE KEYS */;
INSERT INTO `FAMILLE` VALUES ('AA','Antalgiques en association'),('AAA','Antalgiques antipyrÃ©tiques en association'),('AAC','AntidÃ©presseur d\'action centrale'),('AAH','Antivertigineux antihistaminique H1'),('ABA','Antibiotique antituberculeux'),('ABC','Antibiotique antiacnÃ©ique local'),('ABP','Antibiotique de la famille des bÃ©ta-lactamines (pÃ©nicilline A)'),('AFC','Antibiotique de la famille des cyclines'),('AFM','Antibiotique de la famille des macrolides'),('AH','Antihistaminique H1 local'),('AIM','AntidÃ©presseur imipraminique (tricyclique)'),('AIN','AntidÃ©presseur inhibiteur sÃ©lectif de la recapture de la sÃ©rotonine'),('ALO','Antibiotique local (ORL)'),('ANS','AntidÃ©presseur IMAO non sÃ©lectif'),('AO','Antibiotique ophtalmique'),('AP','Antipsychotique normothymique'),('AUM','Antibiotique urinaire minute'),('CRT','CorticoÃ¯de, antibiotique et antifongique Ã Â  usage local'),('HYP','Hypnotique antihistaminique'),('PSA','Psychostimulant, antiasthÃ©nique');
/*!40000 ALTER TABLE `FAMILLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `FORMULER`
--

DROP TABLE IF EXISTS `FORMULER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `FORMULER` (
  `MED_DEPOTLEGAL` varchar(20) NOT NULL DEFAULT '',
  `PRE_CODE` varchar(4) NOT NULL DEFAULT '',
  PRIMARY KEY (`MED_DEPOTLEGAL`,`PRE_CODE`),
  KEY `PRE_CODE` (`PRE_CODE`),
  CONSTRAINT `FORMULER_ibfk_1` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`),
  CONSTRAINT `FORMULER_ibfk_2` FOREIGN KEY (`PRE_CODE`) REFERENCES `PRESENTATION` (`PRE_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `FORMULER`
--

LOCK TABLES `FORMULER` WRITE;
/*!40000 ALTER TABLE `FORMULER` DISABLE KEYS */;
/*!40000 ALTER TABLE `FORMULER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `INTERAGIR`
--

DROP TABLE IF EXISTS `INTERAGIR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `INTERAGIR` (
  `MED_PERTURBATEUR` varchar(20) NOT NULL DEFAULT '',
  `MED_MED_PERTURBE` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`MED_PERTURBATEUR`,`MED_MED_PERTURBE`),
  KEY `MED_MED_PERTURBE` (`MED_MED_PERTURBE`),
  CONSTRAINT `INTERAGIR_ibfk_1` FOREIGN KEY (`MED_PERTURBATEUR`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`),
  CONSTRAINT `INTERAGIR_ibfk_2` FOREIGN KEY (`MED_MED_PERTURBE`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `INTERAGIR`
--

LOCK TABLES `INTERAGIR` WRITE;
/*!40000 ALTER TABLE `INTERAGIR` DISABLE KEYS */;
/*!40000 ALTER TABLE `INTERAGIR` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `INVITER`
--

DROP TABLE IF EXISTS `INVITER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `INVITER` (
  `AC_CODE` int(11) NOT NULL DEFAULT '0',
  `PRA_CODE` int(11) NOT NULL DEFAULT '0',
  `SPECIALISTEON` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`AC_CODE`,`PRA_CODE`),
  KEY `PRA_CODE` (`PRA_CODE`),
  CONSTRAINT `INVITER_ibfk_1` FOREIGN KEY (`AC_CODE`) REFERENCES `ACTIVITE_COMPL` (`AC_CODE`),
  CONSTRAINT `INVITER_ibfk_2` FOREIGN KEY (`PRA_CODE`) REFERENCES `PRATICIEN` (`PRA_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `INVITER`
--

LOCK TABLES `INVITER` WRITE;
/*!40000 ALTER TABLE `INVITER` DISABLE KEYS */;
/*!40000 ALTER TABLE `INVITER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `LABO`
--

DROP TABLE IF EXISTS `LABO`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `LABO` (
  `LAB_CODE` varchar(4) NOT NULL,
  `LAB_NOM` varchar(20) DEFAULT NULL,
  `LAB_CHEFVENTE` varchar(40) DEFAULT NULL,
  PRIMARY KEY (`LAB_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `LABO`
--

LOCK TABLES `LABO` WRITE;
/*!40000 ALTER TABLE `LABO` DISABLE KEYS */;
INSERT INTO `LABO` VALUES ('BC','Bichat','Suzanne Terminus'),('GY','Gyverny','Marcel MacDouglas'),('SW','Swiss Kane','Alain Poutre');
/*!40000 ALTER TABLE `LABO` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `MEDICAMENT`
--

DROP TABLE IF EXISTS `MEDICAMENT`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `MEDICAMENT` (
  `MED_DEPOTLEGAL` varchar(20) NOT NULL,
  `MED_NOMCOMMERCIAL` varchar(50) DEFAULT NULL,
  `FAM_CODE` varchar(6) DEFAULT NULL,
  `MED_COMPOSITION` text,
  `MED_EFFETS` text,
  `MED_CONTREINDIC` text,
  `MED_PRIXECHANTILLON` float DEFAULT NULL,
  PRIMARY KEY (`MED_DEPOTLEGAL`),
  KEY `FAM_CODE` (`FAM_CODE`),
  CONSTRAINT `MEDICAMENT_ibfk_1` FOREIGN KEY (`FAM_CODE`) REFERENCES `FAMILLE` (`FAM_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `MEDICAMENT`
--

LOCK TABLES `MEDICAMENT` WRITE;
/*!40000 ALTER TABLE `MEDICAMENT` DISABLE KEYS */;
INSERT INTO `MEDICAMENT` VALUES ('3MYC7','TRIMYCINE','CRT','Triamcinolone (acÃ©tonide) + NÃ©omycine + Nystatine','Ce mÃ©dicament est un corticoÃ¯de Ã Â  activitÃ© forte ou trÃ¨s forte associÃ© Ã Â  un antibiotique et un antifongique, utilisÃ© en application locale dans certaines atteintes cutanÃ©es surinfectÃ©es.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants, d\'infections de la peau ou de parasitisme non traitÃ©s, d\'acnÃ©. Ne pas appliquer sur une plaie, ni sous un pansement occlusif.',1.5),('ADIMOL9','ADIMOL','ABP','Amoxicilline + Acide clavulanique','Ce mÃ©dicament, plus puissant que les pÃ©nicillines simples, est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux pÃ©nicillines ou aux cÃ©phalosporines.',3),('AMOPIL7','AMOPIL','ABP','Amoxicilline','Ce mÃ©dicament, plus puissant que les pÃ©nicillines simples, est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux pÃ©nicillines. Il doit Ãªtre administrÃ© avec prudence en cas d\'allergie aux cÃ©phalosporines.',1.5),('AMOX45','AMOXAR','ABP','Amoxicilline','Ce mÃ©dicament, plus puissant que les pÃ©nicillines simples, est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','La prise de ce mÃ©dicament peut rendre positifs les tests de dÃ©pistage du dopage.',1.5),('AMOXIG12','AMOXI GÃ©','ABP','Amoxicilline','Ce mÃ©dicament, plus puissant que les pÃ©nicillines simples, est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux pÃ©nicillines. Il doit Ãªtre administrÃ© avec prudence en cas d\'allergie aux cÃ©phalosporines.',1.5),('APATOUX22','APATOUX Vitamine C','ALO','Tyrothricine + TÃ©tracaÃ¯ne + Acide ascorbique (Vitamine C)','Ce mÃ©dicament est utilisÃ© pour traiter les affections de la bouche et de la gorge.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants, en cas de phÃ©nylcÃ©tonurie et chez l\'enfant de moins de 6 ans.',1.5),('BACTIG10','BACTIGEL','ABC','Erythromycine','Ce mÃ©dicament est utilisÃ© en application locale pour traiter l\'acnÃ© et les infections cutanÃ©es bactÃ©riennes associÃ©es.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux antibiotiques de la famille des macrolides ou des lincosanides.',1.5),('BACTIV13','BACTIVIL','AFM','Erythromycine','Ce mÃ©dicament est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux macrolides (dont le chef de file est l\'Ã©rythromycine).',1.5),('BITALV','BIVALIC','AAA','DextropropoxyphÃ¨ne + ParacÃ©tamol','Ce mÃ©dicament est utilisÃ© pour traiter les douleurs d\'intensitÃ© modÃ©rÃ©e ou intense.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux mÃ©dicaments de cette famille, d\'insuffisance hÃ©patique ou d\'insuffisance rÃ©nale.',1.5),('CARTION6','CARTION','AAA','Acide acÃ©tylsalicylique (aspirine) + Acide ascorbique (Vitamine C) + ParacÃ©tamol','Ce mÃ©dicament est utilisÃ© dans le traitement symptomatique de la douleur ou de la fiÃ¨vre.','Ce mÃ©dicament est contre-indiquÃ© en cas de troubles de la coagulation (tendances aux hÃ©morragies), d\'ulcÃ¨re gastroduodÃ©nal, maladies graves du foie.',1.5),('CLAZER6','CLAZER','AFM','Clarithromycine','Ce mÃ©dicament est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques. Il est Ã©galement utilisÃ© dans le traitement de l\'ulcÃ¨re gastro-duodÃ©nal, en association avec d\'autres mÃ©dicaments.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux macrolides (dont le chef de file est l\'Ã©rythromycine).',1.5),('DEPRIL9','DEPRAMIL','AIM','Clomipramine','Ce mÃ©dicament est utilisÃ© pour traiter les Ã©pisodes dÃ©pressifs sÃ©vÃ¨res, certaines douleurs rebelles, les troubles obsessionnels compulsifs et certaines Ã©nurÃ©sies chez l\'enfant.','Ce mÃ©dicament est contre-indiquÃ© en cas de glaucome ou d\'adÃ©nome de la prostate, d\'infarctus rÃ©cent, ou si vous avez reÃ Â§u un traitement par IMAO durant les 2 semaines prÃ©cÃ©dentes ou en cas d\'allergie aux antidÃ©presseurs imipraminiques.',1.5),('DIMIRTAM6','DIMIRTAM','AAC','Mirtazapine','Ce mÃ©dicament est utilisÃ© pour traiter les Ã©pisodes dÃ©pressifs sÃ©vÃ¨res.','La prise de ce produit est contre-indiquÃ©e en cas de d\'allergie Ã Â  l\'un des constituants.',1.5),('DOLRIL7','DOLORIL','AAA','Acide acÃ©tylsalicylique (aspirine) + Acide ascorbique (Vitamine C) + ParacÃ©tamol','Ce mÃ©dicament est utilisÃ© dans le traitement symptomatique de la douleur ou de la fiÃ¨vre.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie au paracÃ©tamol ou aux salicylates.',1.5),('DORNOM8','NORMADOR','HYP','Doxylamine','Ce mÃ©dicament est utilisÃ© pour traiter l\'insomnie chez l\'adulte.','Ce mÃ©dicament est contre-indiquÃ© en cas de glaucome, de certains troubles urinaires (rÃ©tention urinaire) et chez l\'enfant de moins de 15 ans.',1.5),('EQUILARX6','EQUILAR','AAH','MÃ©clozine','Ce mÃ©dicament est utilisÃ© pour traiter les vertiges et pour prÃ©venir le mal des transports.','Ce mÃ©dicament ne doit pas Ãªtre utilisÃ© en cas d\'allergie au produit, en cas de glaucome ou de rÃ©tention urinaire.',1.5),('EVILR7','EVEILLOR','PSA','Adrafinil','Ce mÃ©dicament est utilisÃ© pour traiter les troubles de la vigilance et certains symptomes neurologiques chez le sujet agÃ©.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants.',1.5),('INSXT5','INSECTIL','AH','DiphÃ©nydramine','Ce mÃ©dicament est utilisÃ© en application locale sur les piqÃ»res d\'insecte et l\'urticaire.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux antihistaminiques.',1.5),('JOVAI8','JOVENIL','AFM','Josamycine','Ce mÃ©dicament est utilisÃ© pour traiter des infections bactÃ©riennes spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux macrolides (dont le chef de file est l\'Ã©rythromycine).',1.5),('LIDOXY23','LIDOXYTRACINE','AFC','OxytÃ©tracycline +LidocaÃ¯ne','Ce mÃ©dicament est utilisÃ© en injection intramusculaire pour traiter certaines infections spÃ©cifiques.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants. Il ne doit pas Ãªtre associÃ© aux rÃ©tinoÃ¯des.',1.5),('LITHOR12','LITHORINE','AP','Lithium','Ce mÃ©dicament est indiquÃ© dans la prÃ©vention des psychoses maniaco-dÃ©pressives ou pour traiter les Ã©tats maniaques.','Ce mÃ©dicament ne doit pas Ãªtre utilisÃ© si vous Ãªtes allergique au lithium. Avant de prendre ce traitement, signalez Ã Â  votre mÃ©decin traitant si vous souffrez d\'insuffisance rÃ©nale, ou si vous avez un rÃ©gime sans sel.',1.5),('PARMOL16','PARMOCODEINE','AA','CodÃ©ine + ParacÃ©tamol','Ce mÃ©dicament est utilisÃ© pour le traitement des douleurs lorsque des antalgiques simples ne sont pas assez efficaces.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants, chez l\'enfant de moins de 15 Kg, en cas d\'insuffisance hÃ©patique ou respiratoire, d\'asthme, de phÃ©nylcÃ©tonurie et chez la femme qui allaite.',1.5),('PHYSOI8','PHYSICOR','PSA','Sulbutiamine','Ce mÃ©dicament est utilisÃ© pour traiter les baisses d\'activitÃ© physique ou psychique, souvent dans un contexte de dÃ©pression.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants.',1.5),('PIRIZ8','PIRIZAN','ABA','Pyrazinamide','Ce mÃ©dicament est utilisÃ©, en association Ã Â  d\'autres antibiotiques, pour traiter la tuberculose.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants, d\'insuffisance rÃ©nale ou hÃ©patique, d\'hyperuricÃ©mie ou de porphyrie.',1.5),('POMDI20','POMADINE','AO','Bacitracine','Ce mÃ©dicament est utilisÃ© pour traiter les infections oculaires de la surface de l\'oeil.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie aux antibiotiques appliquÃ©s localement.',1.5),('TROXT21','TROXADET','AIN','ParoxÃ©tine','Ce mÃ©dicament est utilisÃ© pour traiter la dÃ©pression et les troubles obsessionnels compulsifs. Il peut Ã©galement Ãªtre utilisÃ© en prÃ©vention des crises de panique avec ou sans agoraphobie.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie au produit.',1.5),('TXISOL22','TOUXISOL Vitamine C','ALO','Tyrothricine + Acide ascorbique (Vitamine C)','Ce mÃ©dicament est utilisÃ© pour traiter les affections de la bouche et de la gorge.','Ce mÃ©dicament est contre-indiquÃ© en cas d\'allergie Ã Â  l\'un des constituants et chez l\'enfant de moins de 6 ans.',1.5),('URIEG6','URIREGUL','AUM','Fosfomycine tromÃ©tamol','Ce mÃ©dicament est utilisÃ© pour traiter les infections urinaires simples chez la femme de moins de 65 ans.','La prise de ce mÃ©dicament est contre-indiquÃ©e en cas d\'allergie Ã Â  l\'un des constituants et d\'insuffisance rÃ©nale.',1.5);
/*!40000 ALTER TABLE `MEDICAMENT` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `MOTIF_VISITE`
--

DROP TABLE IF EXISTS `MOTIF_VISITE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `MOTIF_VISITE` (
  `MOT_CODE` varchar(3) NOT NULL,
  `MOT_LIB` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`MOT_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `MOTIF_VISITE`
--

LOCK TABLES `MOTIF_VISITE` WRITE;
/*!40000 ALTER TABLE `MOTIF_VISITE` DISABLE KEYS */;
INSERT INTO `MOTIF_VISITE` VALUES ('ACT','Actualisation'),('AUT','Autre'),('PRD','PÃ©riodicitÃ©'),('REL','Relance'),('SOL','Sollicitation praticien');
/*!40000 ALTER TABLE `MOTIF_VISITE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `OFFRIR`
--

DROP TABLE IF EXISTS `OFFRIR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `OFFRIR` (
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  `RAP_CODE` int(11) NOT NULL DEFAULT '0',
  `MED_DEPOTLEGAL` varchar(20) NOT NULL DEFAULT '',
  `OFF_QTE` int(11) DEFAULT NULL,
  PRIMARY KEY (`MED_DEPOTLEGAL`,`RAP_CODE`,`VIS_MATRICULE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`,`RAP_CODE`),
  CONSTRAINT `OFFRIR_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`, `RAP_CODE`) REFERENCES `RAPPORT_VISITE` (`VIS_MATRICULE`, `RAP_CODE`),
  CONSTRAINT `OFFRIR_ibfk_2` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `OFFRIR`
--

LOCK TABLES `OFFRIR` WRITE;
/*!40000 ALTER TABLE `OFFRIR` DISABLE KEYS */;
INSERT INTO `OFFRIR` VALUES ('a17',4,'3MYC7',3),('a17',407,'AMOPIL7',3),('a17',4,'AMOX45',12),('a17',1,'APATOUX22',1),('a17',1,'DOLRIL7',2),('a17',406,'DOLRIL7',2),('a17',1,'EVILR7',4),('a17',407,'JOVAI8',2),('f39',145,'PIRIZ8',3),('f39',145,'URIEG6',3);
/*!40000 ALTER TABLE `OFFRIR` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `POSSEDER`
--

DROP TABLE IF EXISTS `POSSEDER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `POSSEDER` (
  `PRA_CODE` int(11) NOT NULL DEFAULT '0',
  `SPE_CODE` varchar(10) NOT NULL DEFAULT '',
  `POS_DIPLOME` varchar(20) DEFAULT NULL,
  `POS_COEFPRESCRIPTION` float DEFAULT NULL,
  PRIMARY KEY (`PRA_CODE`,`SPE_CODE`),
  KEY `SPE_CODE` (`SPE_CODE`),
  CONSTRAINT `POSSEDER_ibfk_1` FOREIGN KEY (`PRA_CODE`) REFERENCES `PRATICIEN` (`PRA_CODE`),
  CONSTRAINT `POSSEDER_ibfk_2` FOREIGN KEY (`SPE_CODE`) REFERENCES `SPECIALITE` (`SPE_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `POSSEDER`
--

LOCK TABLES `POSSEDER` WRITE;
/*!40000 ALTER TABLE `POSSEDER` DISABLE KEYS */;
/*!40000 ALTER TABLE `POSSEDER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `PRATICIEN`
--

DROP TABLE IF EXISTS `PRATICIEN`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `PRATICIEN` (
  `PRA_CODE` int(11) NOT NULL,
  `PRA_NOM` varchar(50) DEFAULT NULL,
  `PRA_PRENOM` varchar(60) DEFAULT NULL,
  `PRA_COEFNOTORIETE` float DEFAULT NULL,
  `TYP_CODE` varchar(6) DEFAULT NULL,
  PRIMARY KEY (`PRA_CODE`),
  KEY `TYP_CODE` (`TYP_CODE`),
  CONSTRAINT `PRATICIEN_ibfk_1` FOREIGN KEY (`TYP_CODE`) REFERENCES `TYPE_PRATICIEN` (`TYP_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `PRATICIEN`
--

LOCK TABLES `PRATICIEN` WRITE;
/*!40000 ALTER TABLE `PRATICIEN` DISABLE KEYS */;
INSERT INTO `PRATICIEN` VALUES (1,'Notini','Alain',290.03,'MH'),(2,'Gosselin','Albert',307.49,'MV'),(3,'Delahaye','AndrÃ©',185.79,'PS'),(4,'Leroux','AndrÃ©',172.04,'PH'),(5,'Desmoulins','Anne',94.75,'PO'),(6,'Mouel','Anne',45.2,'MH'),(7,'Desgranges-Lentz','Antoine',20.07,'MV'),(8,'Marcouiller','Arnaud',396.52,'PS'),(9,'Dupuy','Benoit',395.66,'PH'),(10,'Lerat','Bernard',257.79,'PO'),(11,'MarÃ§ais-Lefebvre','Bertrand',450.96,'MH'),(12,'Boscher','Bruno',356.14,'MV'),(13,'Morel','Catherine',379.57,'PS'),(14,'Guivarch','Chantal',114.56,'PH'),(15,'Bessin-Grosdoit','Christophe',222.06,'PO'),(16,'Rossa','Claire',529.78,'MH'),(17,'Cauchy','Denis',458.82,'MV'),(18,'GaffÃ©','Dominique',213.4,'PS'),(19,'Guenon','Dominique',175.89,'PH'),(20,'PrÃ©vot','Dominique',151.36,'PO'),(21,'Houchard','Eliane',436.96,'MH'),(22,'Desmons','Elisabeth',281.17,'MV'),(23,'Flament','Elisabeth',315.6,'PS'),(24,'Goussard','Emmanuel',40.72,'PH'),(25,'Desprez','Eric',406.85,'PO'),(26,'Coste','Evelyne',441.87,'MH'),(27,'Lefebvre','FrÃ©dÃ©ric',573.63,'MV'),(28,'LemÃ©e','FrÃ©dÃ©ric',326.4,'PS'),(29,'Martin','FrÃ©dÃ©ric',506.06,'PH'),(30,'Marie','FrÃ©dÃ©rique',313.31,'PO'),(31,'Rosenstech','GeneviÃ¨ve',366.82,'MH'),(32,'Pontavice','Ghislaine',265.58,'MV'),(33,'Leveneur-Mosquet','Guillaume',184.97,'PS'),(34,'Blanchais','Guy',502.48,'PH'),(35,'Leveneur','Hugues',7.39,'PO'),(36,'Mosquet','Isabelle',77.1,'MH'),(37,'Giraudon','Jean-Christophe',92.62,'MV'),(38,'Marie','Jean-Claude',120.1,'PS'),(39,'Maury','Jean-FranÃ§ois',13.73,'PH'),(40,'Dennel','Jean-Louis',550.69,'PO'),(41,'Ain','Jean-Pierre',5.59,'MH'),(42,'Chemery','Jean-Pierre',396.58,'MV'),(43,'Comoz','Jean-Pierre',340.35,'PS'),(44,'Desfaudais','Jean-Pierre',71.76,'PH'),(45,'Phan','JÃ©rÃƒÂ´me',451.61,'PO'),(46,'Riou','Line',193.25,'MH'),(47,'Chubilleau','Louis',202.07,'MV'),(48,'Lebrun','Lucette',410.41,'PS'),(49,'Goessens','Marc',548.57,'PH'),(50,'Laforge','Marc',265.05,'PO'),(51,'Millereau','Marc',430.42,'MH'),(52,'Dauverne','Marie-Christine',281.05,'MV'),(53,'Vittorio','Myriam',356.23,'PS'),(54,'Lapasset','Nhieu',107,'PH'),(55,'Plantet-Besnier','Nicole',369.94,'PO'),(56,'Chubilleau','Pascal',290.75,'MH'),(57,'Robert','Pascal',162.41,'MV'),(58,'Jean','Pascale',375.52,'PS'),(59,'Chanteloube','Patrice',478.01,'PH'),(60,'Lecuirot','Patrice',239.66,'PO'),(61,'Gandon','Patrick',599.06,'MH'),(62,'Mirouf','Patrick',458.42,'MV'),(63,'Boireaux','Philippe',454.48,'PS'),(64,'Cendrier','Philippe',164.16,'PH'),(65,'Duhamel','Philippe',98.62,'PO'),(66,'Grigy','Philippe',285.1,'MH'),(67,'Linard','Philippe',486.3,'MV'),(68,'Lozier','Philippe',48.4,'PS'),(69,'DechÃ¢tre','Pierre',253.75,'PH'),(70,'Goessens','Pierre',426.19,'PO'),(71,'LemÃ©nager','Pierre',118.7,'MH'),(72,'NÃ©e','Pierre',72.54,'MV'),(73,'Guyot','Pierre-Laurent',352.31,'PS'),(74,'Chauchard','Roger',552.19,'PH'),(75,'Mabire','Roland',422.39,'PO'),(76,'Leroy','Soazig',570.67,'MH'),(77,'Guyot','StÃ©phane',28.85,'MV'),(78,'Delposen','Sylvain',292.01,'PS'),(79,'Rault','Sylvie',526.6,'PH'),(80,'Renouf','Sylvie',425.24,'PO'),(81,'Alliet-Grach','Thierry',451.31,'MH'),(82,'Bayard','Thierry',271.71,'MV'),(83,'Gauchet','Thierry',406.1,'PS'),(84,'Bobichon','Tristan',218.36,'PH'),(85,'Duchemin-Laniel','VÃ©ronique',265.61,'PO'),(86,'Laurent','YounÃ¨s',496.1,'MH');
/*!40000 ALTER TABLE `PRATICIEN` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `PRESCRIRE`
--

DROP TABLE IF EXISTS `PRESCRIRE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `PRESCRIRE` (
  `MED_DEPOTLEGAL` varchar(20) NOT NULL DEFAULT '',
  `TIN_CODE` varchar(10) NOT NULL DEFAULT '',
  `DOS_CODE` varchar(20) NOT NULL DEFAULT '',
  `PRE_POSOLOGIE` varchar(80) DEFAULT NULL,
  PRIMARY KEY (`MED_DEPOTLEGAL`,`TIN_CODE`,`DOS_CODE`),
  KEY `TIN_CODE` (`TIN_CODE`),
  KEY `DOS_CODE` (`DOS_CODE`),
  CONSTRAINT `PRESCRIRE_ibfk_1` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`),
  CONSTRAINT `PRESCRIRE_ibfk_2` FOREIGN KEY (`TIN_CODE`) REFERENCES `TYPE_INDIVIDU` (`TIN_CODE`),
  CONSTRAINT `PRESCRIRE_ibfk_3` FOREIGN KEY (`DOS_CODE`) REFERENCES `DOSAGE` (`DOS_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `PRESCRIRE`
--

LOCK TABLES `PRESCRIRE` WRITE;
/*!40000 ALTER TABLE `PRESCRIRE` DISABLE KEYS */;
/*!40000 ALTER TABLE `PRESCRIRE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `PRESENTATION`
--

DROP TABLE IF EXISTS `PRESENTATION`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `PRESENTATION` (
  `PRE_CODE` varchar(4) NOT NULL,
  `PRE_LIBELLE` varchar(40) DEFAULT NULL,
  PRIMARY KEY (`PRE_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `PRESENTATION`
--

LOCK TABLES `PRESENTATION` WRITE;
/*!40000 ALTER TABLE `PRESENTATION` DISABLE KEYS */;
/*!40000 ALTER TABLE `PRESENTATION` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `PRESENTE`
--

DROP TABLE IF EXISTS `PRESENTE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `PRESENTE` (
  `MED_DEPOTLEGAL` varchar(20) NOT NULL DEFAULT '',
  `RAP_CODE` int(11) NOT NULL DEFAULT '0',
  `PRE_CONNAISSANCE` int(11) DEFAULT NULL,
  PRIMARY KEY (`MED_DEPOTLEGAL`,`RAP_CODE`),
  KEY `RAP_CODE` (`RAP_CODE`),
  CONSTRAINT `PRESENTE_ibfk_1` FOREIGN KEY (`MED_DEPOTLEGAL`) REFERENCES `MEDICAMENT` (`MED_DEPOTLEGAL`),
  CONSTRAINT `PRESENTE_ibfk_2` FOREIGN KEY (`RAP_CODE`) REFERENCES `RAPPORT_VISITE` (`RAP_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `PRESENTE`
--

LOCK TABLES `PRESENTE` WRITE;
/*!40000 ALTER TABLE `PRESENTE` DISABLE KEYS */;
INSERT INTO `PRESENTE` VALUES ('AMOPIL7',407,12),('APATOUX22',122,19),('BACTIV13',159,17),('CARTION6',409,7),('CLAZER6',1,7),('DEPRIL9',405,14),('DIMIRTAM6',155,17),('DORNOM8',1,17),('DORNOM8',406,16),('EQUILARX6',407,16),('EVILR7',159,18),('INSXT5',155,18),('JOVAI8',123,15),('JOVAI8',408,17),('PHYSOI8',408,19),('PIRIZ8',7,2),('PIRIZ8',145,6),('PIRIZ8',409,0),('POMDI20',405,11),('TXISOL22',122,20),('TXISOL22',123,11),('URIEG6',7,2),('URIEG6',145,9);
/*!40000 ALTER TABLE `PRESENTE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `RAPPORT_VISITE`
--

DROP TABLE IF EXISTS `RAPPORT_VISITE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `RAPPORT_VISITE` (
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  `RAP_CODE` int(11) NOT NULL,
  `PRA_CODE` int(11) DEFAULT NULL,
  `RAP_DATEVISITE` date DEFAULT NULL,
  `RAP_BILAN` text,
  `MOT_CODE` varchar(3) DEFAULT NULL,
  `RAP_COEFCONFIANCE` int(11) DEFAULT NULL,
  `RAP_DATESAISIE` date DEFAULT NULL,
  `RAP_DUREESAISIE` int(11) DEFAULT NULL,
  `RAP_CONCURRENCE` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`RAP_CODE`,`VIS_MATRICULE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`),
  KEY `PRA_CODE` (`PRA_CODE`),
  KEY `MOT_CODE` (`MOT_CODE`),
  CONSTRAINT `RAPPORT_VISITE_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`),
  CONSTRAINT `RAPPORT_VISITE_ibfk_2` FOREIGN KEY (`PRA_CODE`) REFERENCES `PRATICIEN` (`PRA_CODE`),
  CONSTRAINT `RAPPORT_VISITE_ibfk_3` FOREIGN KEY (`MOT_CODE`) REFERENCES `MOTIF_VISITE` (`MOT_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `RAPPORT_VISITE`
--

LOCK TABLES `RAPPORT_VISITE` WRITE;
/*!40000 ALTER TABLE `RAPPORT_VISITE` DISABLE KEYS */;
INSERT INTO `RAPPORT_VISITE` VALUES ('a17',1,56,'2013-08-19','1, 2, 3, TEST !','PRD',16,'2013-08-20',NULL,'Rien'),('a131',3,23,'2002-04-18','MÃ©decin curieux, Ã  recontacer en dÃ©cembre pour rÃ©union',NULL,NULL,NULL,NULL,NULL),('a17',4,4,'2003-05-21','Changement de direction, redÃ©finition de la politique mÃ©dicamenteuse, recours au gÃ©nÃ©rique',NULL,NULL,NULL,NULL,NULL),('a131',7,41,'2003-03-23','RAS\nChangement de tel : 05 89 89 89 89',NULL,NULL,NULL,NULL,NULL),('a17',7,56,'2013-08-22','Praticien vraiment NUL !!!','ACT',5,'2013-08-23',NULL,'Rien'),('f39',122,56,'2013-07-18','Visite de courtoisie Visite réalisé auprès d\'un remplacant (praticien absent)','AUT',11,'2013-08-21',NULL,'Affiche'),('a17',123,26,'2012-10-10','Ha coucou !','ACT',16,'2013-08-25',NULL,'Prospectus'),('f39',145,27,'2013-07-27','Petite baisse de moral, programmÃ© une visite rapidement !','REL',13,'2013-08-20',NULL,'Affiche'),('f39',155,43,'2013-07-20','Bouuuuuuuah ! BLEH !!','PRD',15,'2013-08-21',NULL,'Rien'),('a17',159,15,'2013-08-14','aaaa','AUT',18,'2013-09-05',NULL,'Rien'),('e22',405,48,'2013-09-04',' Visite réalisé auprès d\'un remplacant (praticien absent)','PRD',19,'2013-09-05',NULL,'Rien'),('a17',406,74,'2013-12-30','Visite nÃ©cessaire, bon contact avec le praticien. BONJOUR !','ACT',15,'2013-12-30',NULL,'Rien'),('a17',407,63,'2013-12-30','Visite cordiale, programmation d\'une autre visite d\'actualisation rapidement.','ACT',15,'2013-12-30',NULL,'Rien'),('f39',408,42,'2014-01-02','Bonne visite, praticien connaissant bien nos produits.','ACT',16,'2014-01-02',NULL,'Rien'),('f39',409,18,'2014-01-02','Le praticien connait peu nos produits. Une visite doit rapidement Ãªtre reprogrammÃ©.','SOL',11,'2014-01-02',NULL,'Affiche');
/*!40000 ALTER TABLE `RAPPORT_VISITE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `REALISER`
--

DROP TABLE IF EXISTS `REALISER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `REALISER` (
  `AC_CODE` int(11) NOT NULL DEFAULT '0',
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  `REA_MTTFRAIS` float DEFAULT NULL,
  PRIMARY KEY (`AC_CODE`,`VIS_MATRICULE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`),
  CONSTRAINT `REALISER_ibfk_1` FOREIGN KEY (`AC_CODE`) REFERENCES `ACTIVITE_COMPL` (`AC_CODE`),
  CONSTRAINT `REALISER_ibfk_2` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `REALISER`
--

LOCK TABLES `REALISER` WRITE;
/*!40000 ALTER TABLE `REALISER` DISABLE KEYS */;
/*!40000 ALTER TABLE `REALISER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `REGION`
--

DROP TABLE IF EXISTS `REGION`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `REGION` (
  `REG_CODE` varchar(4) NOT NULL DEFAULT '',
  `SEC_CODE` varchar(2) DEFAULT NULL,
  `REG_NOM` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`REG_CODE`),
  KEY `SEC_CODE` (`SEC_CODE`),
  CONSTRAINT `REGION_ibfk_1` FOREIGN KEY (`SEC_CODE`) REFERENCES `SECTEUR` (`SEC_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `REGION`
--

LOCK TABLES `REGION` WRITE;
/*!40000 ALTER TABLE `REGION` DISABLE KEYS */;
INSERT INTO `REGION` VALUES ('AL','E','Alsace Lorraine'),('AQ','S','Aquitaine'),('AU','P','Auvergne'),('BG','O','Bretagne'),('BN','O','Basse Normandie'),('BO','E','Bourgogne'),('CA','N','Champagne Ardennes'),('CE','P','Centre'),('FC','E','Franche ComtÃ©'),('HN','N','Haute Normandie'),('IF','P','Ile de France'),('LG','S','Languedoc'),('LI','P','Limousin'),('MP','S','Midi PyrÃ©nÃ©e'),('NP','N','Nord Pas de Calais'),('PA','S','Provence Alpes Cote d\'Azur'),('PC','O','Poitou Charente'),('PI','N','Picardie'),('PL','O','Pays de Loire'),('RA','E','Rhone Alpes'),('RO','S','Roussilon'),('VD','O','VendÃ©e');
/*!40000 ALTER TABLE `REGION` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `RESPONSABLE`
--

DROP TABLE IF EXISTS `RESPONSABLE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `RESPONSABLE` (
  `RES_CODE` varchar(20) NOT NULL DEFAULT '',
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  PRIMARY KEY (`RES_CODE`,`VIS_MATRICULE`),
  KEY `VIS_MATRICULE` (`VIS_MATRICULE`),
  CONSTRAINT `RESPONSABLE_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `RESPONSABLE`
--

LOCK TABLES `RESPONSABLE` WRITE;
/*!40000 ALTER TABLE `RESPONSABLE` DISABLE KEYS */;
INSERT INTO `RESPONSABLE` VALUES ('r01','a17'),('r02','f02');
/*!40000 ALTER TABLE `RESPONSABLE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `SECTEUR`
--

DROP TABLE IF EXISTS `SECTEUR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `SECTEUR` (
  `SEC_CODE` varchar(2) NOT NULL,
  `SEC_LIBELLE` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`SEC_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `SECTEUR`
--

LOCK TABLES `SECTEUR` WRITE;
/*!40000 ALTER TABLE `SECTEUR` DISABLE KEYS */;
INSERT INTO `SECTEUR` VALUES ('E','Est'),('N','Nord'),('O','Ouest'),('P','Paris centre'),('S','Sud');
/*!40000 ALTER TABLE `SECTEUR` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `SPECIALITE`
--

DROP TABLE IF EXISTS `SPECIALITE`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `SPECIALITE` (
  `SPE_CODE` varchar(10) NOT NULL,
  `SPE_LIBELLE` text,
  PRIMARY KEY (`SPE_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `SPECIALITE`
--

LOCK TABLES `SPECIALITE` WRITE;
/*!40000 ALTER TABLE `SPECIALITE` DISABLE KEYS */;
INSERT INTO `SPECIALITE` VALUES ('ACP','anatomie et cytologie pathologiques'),('AMV','angÃ©iologie, mÃ©decine vasculaire'),('ARC','anesthÃ©siologie et rÃ©animation chirurgicale'),('BM','biologie mÃ©dicale'),('CAC','cardiologie et affections cardio-vasculaires'),('CCT','chirurgie cardio-vasculaire et thoracique'),('CG','chirurgie gÃ©nÃ©rale'),('CMF','chirurgie maxillo-faciale'),('COM','cancÃ©rologie, oncologie mÃ©dicale'),('COT','chirurgie orthopÃ©dique et traumatologie'),('CPR','chirurgie plastique reconstructrice et esthÃ©tique'),('CU','chirurgie urologique'),('CV','chirurgie vasculaire'),('DN','diabÃ©tologie-nutrition, nutrition'),('DV','dermatologie et vÃ©nÃ©rÃ©ologie'),('EM','endocrinologie et mÃ©tabolismes'),('ETD','Ã©valuation et traitement de la douleur'),('GEH','gastro-entÃ©rologie et hÃ©patologie (appareil digestif)'),('GMO','gynÃ©cologie mÃ©dicale, obstÃ©trique'),('GO','gynÃ©cologie-obstÃ©trique'),('HEM','maladies du sang (hÃ©matologie)'),('MBS','mÃ©decine et biologie du sport'),('MDT','mÃ©decine du travail'),('MMO','mÃ©decine manuelle - ostÃ©opathie'),('MN','mÃ©decine nuclÃ©aire'),('MPR','mÃ©decine physique et de rÃ©adaptation'),('MTR','mÃ©decine tropicale, pathologie infectieuse et tropicale'),('NEP','nÃ©phrologie'),('NRC','neurochirurgie'),('NRL','neurologie'),('ODM','orthopÃ©die dento maxillo-faciale'),('OPH','ophtalmologie'),('ORL','oto-rhino-laryngologie'),('PEA','psychiatrie de l\'enfant et de l\'adolescent'),('PME','pÃ©diatrie maladies des enfants'),('PNM','pneumologie'),('PSC','psychiatrie'),('RAD','radiologie (radiodiagnostic et imagerie mÃ©dicale)'),('RDT','radiothÃ©rapie (oncologie option radiothÃ©rapie)'),('RGM','reproduction et gynÃ©cologie mÃ©dicale'),('RHU','rhumatologie'),('STO','stomatologie'),('SXL','sexologie'),('TXA','toxicomanie et alcoologie');
/*!40000 ALTER TABLE `SPECIALITE` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Switchboard Items`
--

DROP TABLE IF EXISTS `Switchboard Items`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Switchboard Items` (
  `SwitchboardID` int(11) DEFAULT NULL,
  `ItemNumber` int(11) DEFAULT NULL,
  `ItemText` varchar(100) DEFAULT NULL,
  `Command` int(11) DEFAULT NULL,
  `Argument` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Switchboard Items`
--

LOCK TABLES `Switchboard Items` WRITE;
/*!40000 ALTER TABLE `Switchboard Items` DISABLE KEYS */;
INSERT INTO `Switchboard Items` VALUES (1,0,'Gestion des comptes rendus',NULL,'Par dÃ©faut'),(1,1,'Comptes-Rendus',3,'RAPPORT_VISITE'),(1,2,'Visiteurs',3,'F_VISITEUR'),(1,3,'Praticiens',3,'F_PRATICIEN'),(1,4,'Medicaments',3,'F_MEDICAMENT'),(1,5,'Quitter',8,'quitter');
/*!40000 ALTER TABLE `Switchboard Items` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `TRAVAILLER`
--

DROP TABLE IF EXISTS `TRAVAILLER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `TRAVAILLER` (
  `VIS_MATRICULE` varchar(20) NOT NULL DEFAULT '',
  `JJMMAA` date NOT NULL DEFAULT '0000-00-00',
  `REG_CODE` varchar(4) NOT NULL DEFAULT '',
  `TRA_ROLE` varchar(22) DEFAULT NULL,
  PRIMARY KEY (`VIS_MATRICULE`,`JJMMAA`,`REG_CODE`),
  KEY `REG_CODE` (`REG_CODE`),
  CONSTRAINT `TRAVAILLER_ibfk_1` FOREIGN KEY (`VIS_MATRICULE`) REFERENCES `VISITEUR` (`VIS_MATRICULE`),
  CONSTRAINT `TRAVAILLER_ibfk_2` FOREIGN KEY (`REG_CODE`) REFERENCES `REGION` (`REG_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `TRAVAILLER`
--

LOCK TABLES `TRAVAILLER` WRITE;
/*!40000 ALTER TABLE `TRAVAILLER` DISABLE KEYS */;
INSERT INTO `TRAVAILLER` VALUES ('a131','1992-12-11','BN','Visiteur'),('a17','1997-09-19','RA','DÃ©lÃ©guÃ©'),('a55','1987-07-17','MP','Visiteur'),('a55','1995-05-19','RO','Visiteur'),('a55','1999-08-21','RO','DÃ©lÃ©guÃ©'),('a93','1999-01-02','PC','Visiteur'),('b13','1996-03-11','AL','Visiteur'),('b16','1997-03-21','BG','Visiteur'),('b19','1999-01-31','PL','Visiteur'),('b25','2000-01-01','PL','DÃ©lÃ©guÃ©'),('b28','2000-08-02','LG','Visiteur'),('b34','1993-12-06','CE','DÃ©lÃ©guÃ©'),('b4','1997-09-25','AQ','Visiteur'),('b50','1998-01-18','PA','Visiteur'),('b59','1995-10-21','RA','Visiteur'),('c14','1989-02-01','PA','Visiteur'),('c14','1997-02-01','PA','DÃ©lÃ©guÃ©'),('c14','2001-03-03','PA','Responsable'),('c3','1992-05-05','CA','Visiteur'),('c54','1991-04-09','AL','Visiteur'),('d13','1991-12-05','PL','Visiteur'),('d51','1997-11-18','FC','DÃ©lÃ©guÃ©'),('e22','1989-03-24','AL','Visiteur'),('e24','2000-02-29','AL','Responsable'),('e39','1988-04-26','IF','Visiteur'),('e49','1996-02-19','MP','Visiteur'),('e5','1990-11-27','MP','Visiteur'),('e5','1995-11-27','MP','DÃ©lÃ©guÃ©'),('e52','1991-10-31','HN','Visiteur'),('f21','1993-06-08','RA','Visiteur'),('f39','1997-02-15','RA','Visiteur'),('f4','1994-05-03','MP','Visiteur'),('g19','1996-01-18','IF','Visiteur'),('g30','2000-10-31','PI','Responsable'),('g53','1985-10-02','BG','Visiteur'),('g7','1996-01-13','LI','Visiteur'),('h13','1993-05-08','LI','Visiteur'),('h30','1998-04-26','IF','Visiteur'),('h35','1993-08-26','AU','Visiteur'),('h40','1992-11-01','CA','Visiteur'),('j45','1998-02-25','CA','Responsable'),('j50','1992-12-16','NP','Visiteur'),('j8','1998-06-18','RA','Responsable'),('k4','1996-11-21','LG','Visiteur'),('k53','1992-04-03','AL','DÃ©lÃ©guÃ©'),('l14','1995-02-02','PL','Visiteur'),('l23','1995-06-05','PC','Visiteur'),('l46','1997-01-24','PL','Visiteur'),('l56','1996-02-27','FC','Visiteur'),('m35','1987-10-06','MP','Visiteur'),('m45','1999-04-08','AL','DÃ©lÃ©guÃ©'),('n42','1996-03-06','HN','Visiteur'),('n58','1992-08-30','CE','Visiteur'),('n59','1994-12-19','PI','Visiteur'),('o26','1995-01-05','LG','Visiteur'),('p32','1992-12-24','IF','Visiteur'),('p40','1999-07-17','BN','Responsable'),('p41','1998-07-27','PC','Visiteur'),('p42','1994-12-12','PI','Visiteur'),('p49','1977-10-03','CE','Visiteur'),('p6','1997-03-30','AQ','Visiteur'),('p7','1990-03-01','RO','Visiteur'),('p8','1991-06-23','BO','Visiteur'),('q17','1997-09-06','BN','Visiteur'),('r24','1998-05-25','BN','Responsable'),('r58','1990-06-30','BG','Visiteur'),('s10','1995-11-14','FC','Visiteur'),('s21','1992-09-25','LI','Visiteur'),('t43','1995-03-09','BO','Visiteur'),('t47','1997-08-29','PI','Visiteur'),('t55','1994-11-29','MP','Visiteur'),('t60','1991-03-29','CE','Visiteur');
/*!40000 ALTER TABLE `TRAVAILLER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `TYPE_INDIVIDU`
--

DROP TABLE IF EXISTS `TYPE_INDIVIDU`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `TYPE_INDIVIDU` (
  `TIN_CODE` varchar(10) NOT NULL,
  `TIN_LIBELLE` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`TIN_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `TYPE_INDIVIDU`
--

LOCK TABLES `TYPE_INDIVIDU` WRITE;
/*!40000 ALTER TABLE `TYPE_INDIVIDU` DISABLE KEYS */;
/*!40000 ALTER TABLE `TYPE_INDIVIDU` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `TYPE_PRATICIEN`
--

DROP TABLE IF EXISTS `TYPE_PRATICIEN`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `TYPE_PRATICIEN` (
  `TYP_CODE` varchar(6) NOT NULL,
  `TYP_LIBELLE` varchar(50) DEFAULT NULL,
  `TYP_LIEU` varchar(70) DEFAULT NULL,
  PRIMARY KEY (`TYP_CODE`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `TYPE_PRATICIEN`
--

LOCK TABLES `TYPE_PRATICIEN` WRITE;
/*!40000 ALTER TABLE `TYPE_PRATICIEN` DISABLE KEYS */;
INSERT INTO `TYPE_PRATICIEN` VALUES ('MH','MÃ©decin Hospitalier','Hopital ou clinique'),('MV','MÃ©decine de Ville','Cabinet'),('PH','Pharmacien Hospitalier','Hopital ou clinique'),('PO','Pharmacien Officine','Pharmacie'),('PS','Personnel de santÃ©','Centre paramÃ©dical');
/*!40000 ALTER TABLE `TYPE_PRATICIEN` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `UTILISATEUR`
--

DROP TABLE IF EXISTS `UTILISATEUR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `UTILISATEUR` (
  `UTI_LOGIN` varchar(50) NOT NULL DEFAULT '',
  `UTI_MDP` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`UTI_LOGIN`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `UTILISATEUR`
--

LOCK TABLES `UTILISATEUR` WRITE;
/*!40000 ALTER TABLE `UTILISATEUR` DISABLE KEYS */;
INSERT INTO `UTILISATEUR` VALUES ('secretaire01','ini');
/*!40000 ALTER TABLE `UTILISATEUR` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `VISITEUR`
--

DROP TABLE IF EXISTS `VISITEUR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `VISITEUR` (
  `VIS_MATRICULE` varchar(20) NOT NULL,
  `VIS_NOM` varchar(50) DEFAULT NULL,
  `VIS_PRENOM` varchar(100) DEFAULT NULL,
  `VIS_ADRESSE` varchar(100) DEFAULT NULL,
  `VIS_CP` varchar(10) DEFAULT NULL,
  `VIS_VILLE` varchar(60) DEFAULT NULL,
  `VIS_DATEEMBAUCHE` date DEFAULT NULL,
  `SEC_CODE` varchar(2) DEFAULT NULL,
  `LAB_CODE` varchar(4) DEFAULT NULL,
  `DEP_CODE` varchar(3) DEFAULT NULL,
  `VIS_MDP` varchar(50) NOT NULL,
  `VIS_GRAINSEL` varchar(10) NOT NULL,
  PRIMARY KEY (`VIS_MATRICULE`),
  KEY `VISITEUR_FK_SECTEUR` (`SEC_CODE`),
  KEY `VISITEUR_FK_LABO` (`LAB_CODE`),
  KEY `VISITEUR_FK_DEPARTEMENT` (`DEP_CODE`),
  CONSTRAINT `VISITEUR_FK_DEPARTEMENT` FOREIGN KEY (`DEP_CODE`) REFERENCES `DEPARTEMENT` (`DEP_CODE`) ON DELETE CASCADE,
  CONSTRAINT `VISITEUR_FK_LABO` FOREIGN KEY (`LAB_CODE`) REFERENCES `LABO` (`LAB_CODE`) ON DELETE CASCADE,
  CONSTRAINT `VISITEUR_FK_SECTEUR` FOREIGN KEY (`SEC_CODE`) REFERENCES `SECTEUR` (`SEC_CODE`) ON DELETE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `VISITEUR`
--

LOCK TABLES `VISITEUR` WRITE;
/*!40000 ALTER TABLE `VISITEUR` DISABLE KEYS */;
INSERT INTO `VISITEUR` VALUES ('a131','Villechalane','Louis','8 cours Lafontaine','29000','BREST','1992-12-11',NULL,'SW','05','c2cb779885dfcd517b9063c5a9ef3a6c','497267008'),('a17','Andre','David','1 r Aimon de ChissÃ©e','38100','GRENOBLE','1991-08-26',NULL,'GY','05','3cba32e6d108a5ce63d4f920d3ac0f40','665601223'),('a55','Bedos','Christian','1 r BÃ©nÃ©dictins','65000','TARBES','1987-07-17',NULL,'GY','05','f17f1a7882b3b8305e3e11151c800afe','113432837'),('a93','Tusseau','Louis','22 r Renou','86000','POITIERS','1999-01-02',NULL,'SW','05','4537b1a94806cca2fb0d01edbc7fc89c','1190428021'),('b13','Bentot','Pascal','11 av 6 Juin','67000','STRASBOURG','1996-03-11',NULL,'GY','05','7bc7d217efcf19f5ac3a602d98d9d766','539459736'),('b16','Bioret','Luc','1 r Linne','35000','RENNES','1997-03-21',NULL,'SW','05','195b52bb36595c91c8d71a2834ab5df8','1139483918'),('b19','Bunisset','Francis','10 r Nicolas Chorier','85000','LA ROCHE SUR YON','1999-01-31',NULL,'GY','05','3e55653b9699686c61c343758828fc4d','326766500'),('b25','Bunisset','Denise','1 r Lionne','49100','ANGERS','1994-07-03',NULL,'SW','05','3899275eeb3315baf0f57505ddc991f1','930646205'),('b28','Cacheux','Bernard','114 r Authie','34000','MONTPELLIER','2000-08-02',NULL,'GY','05','d013a615bc34c866af7d77a9b420ea9b','339533417'),('b34','Cadic','Eric','123 r CaponiÃ¨re','41000','BLOIS','1993-12-06','P','SW','05','dcb6781f1e2f6cb045832716df1e9a0a','1277755809'),('b4','Charoze','Catherine','100 pl GÃ©ants','33000','BORDEAUX','1997-09-25',NULL,'SW','05','80cbf4ba50398c4ff942a3589b7e5563','1076023539'),('b50','Clepkens','Christophe','12 r FÃ©dÃ©rico Garcia Lorca','13000','MARSEILLE','1998-01-18',NULL,'SW','05','b1a72a2de92a66fdc49cdd1189a925f8','1354220510'),('b59','Cottin','Vincenne','36 sq Capucins','5000','GAP','1995-10-21',NULL,'GY','05','73d58232ded56df48c6f4e46bafc46bd','1025977986'),('c14','Daburon','FranÃ§ois','13 r Champs ElysÃ©es','6000','NICE','1989-02-01','S','SW','05','a138edf66af4de479fbec9271ca1efd9','564611407'),('c3','De','Philippe','13 r Charles Peguy','10000','TROYES','1992-05-05',NULL,'SW','05','f2dbabae8957b2229052f49b7f59f585','273495698'),('c54','Debelle','Michel','181 r CaponiÃ¨re','88000','EPINAL','1991-04-09',NULL,'SW','05','464c0fbc3491b774438f61064cfc0206','1256589643'),('d13','Debelle','Jeanne','134 r Stalingrad','44000','NANTES','1991-12-05',NULL,'SW','05','247a6182c8764238e0c9dbec2f5b5738','238111123'),('d51','Debroise','Michel','2 av 6 Juin','70000','VESOUL','1997-11-18','E','GY','05','c91e4b6fea53d8638fd804d0219ac0fc','1280623402'),('e22','Desmarquest','Nathalie','14 r FÃ©dÃ©rico Garcia Lorca','54000','NANCY','1989-03-24',NULL,'GY','01','a0766fd6cf0342a28012d3047616cc9f','854204881'),('e24','Desnost','Pierre','16 r Barral de Montferrat','55000','VERDUN','1993-05-17','E','SW','05','2a11ef553a898da75674c396d68268ee','289297968'),('e39','Dudouit','FrÃ©dÃ©ric','18 quai Xavier Jouvin','75000','PARIS','1988-04-26',NULL,'GY','05','b7596d2584d343e37fbaec48cde54a83','1058250558'),('e49','Duncombe','Claude','19 av Alsace Lorraine','9000','FOIX','1996-02-19',NULL,'GY','05','56ca060e443642f6cafc6e843e566dab','572419769'),('e5','Enault-Pascreau','CÃ©line','25B r Stalingrad','40000','MONT DE MARSAN','1990-11-27','S','GY','02','42f1915c96bd80ce72f5e8c8f08bd5c8','36990862'),('e52','Eynde','ValÃ©rie','3 r Henri Moissan','76000','ROUEN','1991-10-31',NULL,'GY','05','1bd5b96c20265242a2b0a463bd52d23b','522361324'),('f02','Pignoly','Frederic','11 rue montclaire','05000','Gap','2013-11-01','S','SW','05','',''),('f21','Finck','Jacques','rte Montreuil Bellay','74000','ANNECY','1993-06-08',NULL,'SW','05','27a906470dc546f1ab8a83a6838a333d','693088983'),('f39','FrÃ©mont','Fernande','4 r Jean Giono','69000','LYON','1997-02-15',NULL,'GY','05','1976ebeae8b36d86aebc83930604f7cb','259162803'),('f4','Gest','Alain','30 r Authie','46000','FIGEAC','1994-05-03',NULL,'GY','05','2fd0511dfc69c7aaea78fda772fffe70','328456457'),('g19','Gheysen','Galassus','32 bd Mar Foch','75000','PARIS','1996-01-18',NULL,'SW','05','b52781cd6e37192856ba2d3f7a16fb56','1183056405'),('g30','Girard','Yvon','31 av 6 Juin','80000','AMIENS','1999-03-27','N','GY','05','89d7167f01441fc221e7431684b3ac8a','1003950958'),('g53','Gombert','Luc','32 r Emile Gueymard','56000','VANNES','1985-10-02',NULL,'GY','05','278f1d002838eccbafb53cdd2259681e','889157045'),('g7','Guindon','Caroline','40 r Mar Montgomery','87000','LIMOGES','1996-01-13',NULL,'GY','05','68cdb962db56439317d2ba678c205889','921235956'),('h13','Guindon','FranÃ§ois','44 r PicotiÃ¨re','19000','TULLE','1993-05-08',NULL,'SW','05','69b45208d6969b169690e820494db512','1045150812'),('h30','Igigabel','Guy','33 gal Arlequin','94000','CRETEIL','1998-04-26',NULL,'SW','05','d53d3e8b4e5bf3d42fd92f15844ad6a9','427647817'),('h35','Jourdren','Pierre','34 av Jean Perrot','15000','AURRILLAC','1993-08-26',NULL,'GY','05','076b50b8f002e44e1a7d19a2109952c1','1254961607'),('h40','Juttard','Pierre-Raoul','34 cours Jean JaurÃ¨s','8000','SEDAN','1992-11-01',NULL,'GY','05','f7a0130a71e17994bec1a973bf7a266b','321766541'),('j45','LabourÃ©-Morel','Saout','38 cours Berriat','52000','CHAUMONT','1998-02-25','N','SW','05','ef3bf3baa64eaf556ef0667fa448143e','804097535'),('j50','LandrÃ©','Philippe','4 av GÃ©n Laperrine','59000','LILLE','1992-12-16',NULL,'GY','05','14728ca5f1b8dded2983e41fee398a71','66695599'),('j8','Langeard','Hugues','39 av Jean Perrot','93000','BAGNOLET','1998-06-18','P','GY','05','0b3726c24f769c467459c25cb259802e','699268385'),('k4','Lanne','Bernard','4 r Bayeux','30000','NIMES','1996-11-21',NULL,'SW','05','a8e17bb1e62bf70833db8cd58f610748','190353238'),('k53','Le','NoÃ«l','4 av Beauvert','68000','MULHOUSE','1983-03-23',NULL,'SW','05','de3a2e021e67bbb94e29fd1961b47dc0','997943614'),('l14','Le','Jean','39 r Raspail','53000','LAVAL','1995-02-02',NULL,'SW','05','2fd4d67f2bb3151f316f07af7ba6a534','1022207580'),('l23','Leclercq','Servane','11 r Quinconce','18000','BOURGES','1995-06-05',NULL,'SW','05','e9210f143d876cf7a9f8b18f18d27061','1228850872'),('l46','Lecornu','Jean-Bernard','4 bd Mar Foch','72000','LA FERTE BERNARD','1997-01-24',NULL,'GY','05','1b7af11f72cba6174e5fc866ffee594e','347710311'),('l56','Lecornu','Ludovic','4 r Abel Servien','25000','BESANCON','1996-02-27',NULL,'SW','05','03e03fe1f5c70163da324f3b65e9c24d','753220418'),('m35','Lejard','AgnÃ¨s','4 r Anthoard','82000','MONTAUBAN','1987-10-06',NULL,'SW','05','543afc36174880bd52577b4654e39c31','1295225043'),('m45','Lesaulnier','Pascal','47 r Thiers','57000','METZ','1990-10-13',NULL,'SW','05','21143db42b6b06ad719631d6cae4a66c','559383512'),('n42','Letessier','StÃ©phane','5 chem Capuche','27000','EVREUX','1996-03-06',NULL,'GY','05','5dc6ddf2c3d58162c50431e5230de022','1312418904'),('n58','Loirat','Didier','Les PÃªchers citÃ© Bourg la Croix','45000','ORLEANS','1992-08-30',NULL,'GY','05','f94105f27eacb792ddc5025624245eaa','869467588'),('n59','Maffezzoli','Thibaud','5 r Chateaubriand','2000','LAON','1994-12-19',NULL,'SW','05','842882697ea31dc70497eb2d2c85371a','641858697'),('o26','Mancini','Anne','5 r D\'Agier','48000','MENDE','1995-01-05',NULL,'GY','05','7e9804442e303715fc7ee23f9135a0c2','117530889'),('p32','Marcouiller','GÃ©rard','7 pl St Gilles','91000','ISSY LES MOULINEAUX','1992-12-24',NULL,'GY','05','2a6b3abfdebac9679ef84ac260f22dcd','808001316'),('p40','Michel','Jean-Claude','5 r Gabriel PÃ©ri','61000','FLERS','1992-12-14','O','SW','05','914f4eeb00e8ba70130543d9cd86e4bc','200863635'),('p41','Montecot','FranÃ§oise','6 r Paul ValÃ©ry','17000','SAINTES','1998-07-27',NULL,'GY','05','72253f0ffb3fcc44f0947e6dd6a2bb0e','159545843'),('p42','Notini','Veronique','5 r Lieut Chabal','60000','BEAUVAIS','1994-12-12',NULL,'SW','05','8b466620f4d4b79d80407da5a520636e','559213483'),('p49','Onfroy','Den','5 r Sidonie Jacolin','37000','TOURS','1977-10-03',NULL,'GY','05','fe28065c7199db5c3433f479d380457d','645647843'),('p6','Pascreau','Charles','57 bd Mar Foch','64000','PAU','1997-03-30',NULL,'SW','05','62645a2a7a6854fd1ffd644461026c4e','247805559'),('p7','Pernot','Claude-NoÃ«l','6 r Alexandre 1 de Yougoslavie','11000','NARBONNE','1990-03-01',NULL,'SW','05','2a174bbdb208ca17c035dfbb68ce17a1','1202884945'),('p8','Perrier','MaÃ®tre','6 r Aubert Dubayet','71000','CHALON SUR SAONE','1991-06-23',NULL,'GY','05','9fdad97afd3b95e595482c9433f42aed','1249591876'),('q17','Petit','Jean-Louis','7 r Ernest Renan','50000','SAINT LO','1997-09-06',NULL,'GY','05','c5b7f01846ad9e7da68137b60b44509e','627700783'),('r24','Piquery','Patrick','9 r Vaucelles','14000','CAEN','1984-07-29','O','GY','07','b8f12c4915248f605234597f00cc17af','1377155835'),('r58','Quiquandon','JoÃ«l','7 r Ernest Renan','29000','QUIMPER','1990-06-30',NULL,'GY','05','7777986cb0d4877032014aa2f55d719f','1364675276'),('s10','Retailleau','Josselin','88Bis r Saumuroise','39000','DOLE','1995-11-14',NULL,'SW','05','283bb40959e2e80f4e4b0c2a12ffd359','146209932'),('s21','Retailleau','Pascal','32 bd Ayrault','23000','MONTLUCON','1992-09-25',NULL,'SW','05','3300bd8d271f73b43c6e0f9c9796c780','747700749'),('t43','Souron','Maryse','7B r Gay Lussac','21000','DIJON','1995-03-09',NULL,'SW','05','c7879a774e34e1c354a902476581c4ea','544693391'),('t47','Tiphagne','Patrick','7B r Gay Lussac','62000','ARRAS','1997-08-29',NULL,'SW','05','2fda0967784c48bc569cbf883792ed7d','304401295'),('t55','TrÃ©het','Alain','7D chem Barral','12000','RODEZ','1994-11-29',NULL,'SW','05','44ff388f86630209deefd7ffdd212427','723380699'),('t60','Tusseau','Josselin','63 r Bon Repos','28000','CHARTRES','1991-03-29',NULL,'GY','05','a0dad8c1531d8948e3774ab81ef5d244','504828831'),('t82','Jacques','Bourdin','14 rue RMC','92000','Paris','2013-10-30','S','BC','05','a06f32830a859699e33293d656e5d853','927858159');
/*!40000 ALTER TABLE `VISITEUR` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2014-02-24 14:28:59
