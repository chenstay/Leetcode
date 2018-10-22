# Write your MySQL query statement below
select 
    Score, 
    @i := @i + (@pre <> ( @pre := Score)) Rank #<> means !=
                         # pre=score i=i+1
from 
    Scores, 
    (select @i := 0,@pre := -1) init 
order by Score desc
