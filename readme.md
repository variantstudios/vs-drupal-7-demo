
# VS Demo: Drupal 7

## Installation Instructions
1. Clone the repo
2. Create a database
3. Go through the initial drupal setup 
	1. Make sure you select 'Minimal' - http://jmp.sh/MGvEfMk
4. After the Drupal website is setup, in Drush:
	1. $ drush en features -y
5. Login to the Drupal site:
	1. go to '/admin/structure/features' and enable all of the features in the 'defaults' & 'content types' tabs.
	2. Rebuild permissions by going to '/admin/reports/status/rebuild'
	3. 
6. 