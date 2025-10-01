select max(num) as num from(select num
from MyNumbers
group by num
having count(num) = 1
)as unique_numbers;

/*
SELECT IF(COUNT(num) =1, num, null) AS num FROM MyNumbers GROUP BY num ORDER BY COUNT(num), num DESC LIMIT 1;
*/