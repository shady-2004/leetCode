# Write your MySQL query statement below
SELECT b.book_id , b.title , b.author , b.genre , b.publication_year  ,
 b.total_copies AS current_borrowers
 FROM library_books b
 JOIN ( SELECT book_id ,
         COUNT(CASE WHEN return_date IS NULL THEN 1  END ) as cnt
         FROM borrowing_records
         GROUP BY book_id) AS r
ON b.book_id = r.book_id
WHERE r.cnt = b.total_copies
ORDER BY b.total_copies DESC , b.title