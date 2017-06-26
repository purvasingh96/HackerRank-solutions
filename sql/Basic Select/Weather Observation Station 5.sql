/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
select city, LENGTH(city) from station order by LENGTH(city) asc, city asc limit 1;
select city, LENGTH(city) from station order by LENGTH(city) desc, city asc limit 1;
