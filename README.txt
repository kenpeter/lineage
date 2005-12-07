The lineage module adds a table to the taxonomy system that enables sorting
by taxonomy hierarchy for single inheritance vocabularies. It doesn't
provide any obvious functionality to the user by itself, but it does add
another sort option to the views module.

To install:

1) Execute lineage.mysql or lineage.pgsql to add the new table to the
   database.

2) Enable the module in admin/modules.

3) If you have existing hierarchies, be sure to set up the existing
   database by going to lineage/reset. You only need to do this once,
   though there is no harm in doing it again.
