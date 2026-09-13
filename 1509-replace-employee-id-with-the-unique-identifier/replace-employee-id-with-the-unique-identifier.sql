# Write your MySQL query statement below
select U.unique_id, E.name
from Employees E left JOIN EmployeeUNI U
ON E.id=U.id
