# Write your MySQL query statement below
select e.name from Employee as e cross join Employee as ee
where e.id=ee.managerId
group by ee.managerId having count(ee.managerId)>=5