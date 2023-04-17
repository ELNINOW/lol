BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "table1" (
	"Id"	INTEGER,
	"Name"	TEXT,
	"Age"	INTEGER,
	"Qualifications"	TEXT,
	"Contact"	INTEGER,
	PRIMARY KEY("Id")
);
COMMIT;
