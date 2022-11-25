
#SELECT name FROM customerWHERE referee_id <> 2 OR referee_id is NULL
select name from customer where referee_id is null or referee_id!=2;