SELECT Name AS Customers
FROM Customers LEFT JOIN Orders
On Customers.Id=Orders.CustomerId
WHERE CustomerId is NULL
