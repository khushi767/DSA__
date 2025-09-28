# Write your MySQL query statement below
select * from users where
REGEXP_like(mail,'^[A-Za-z][A-Za-z0-9._-]*@leetcode\\.com$','c')

/*
^ → Start of the string

[A-Za-z] → First character must be a letter

[A-Za-z0-9._-]* → Any number of allowed characters

@leetcode\.com → Domain must be exactly @leetcode.com

dollar sign → End of the string

'c' → Case-sensitive match*/