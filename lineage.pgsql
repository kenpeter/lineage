CREATE TABLE term_lineage (
  tid integer NOT NULL default '0',
  lineage varchar(255) NOT NULL default ''
  depth integer varchar(255) NOT NULL default ''
);
CREATE INDEX term_lineage_tid_idx ON term_lineage(tid);
CREATE INDEX term_lineage_lineage_idx ON term_lineage(lineage);
