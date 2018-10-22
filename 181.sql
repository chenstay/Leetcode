# Write your MySQL query statement below
SELECT l1.Name AS Employee
FROM Employee l1 LEFT JOIN Employee l2
On l1.ManagerId=l2.Id
WHERE l1.Salary>l2.Salary;
