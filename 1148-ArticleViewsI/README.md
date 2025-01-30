# **Article Views I**

## **Problem Statement**
This query retrieves a list of distinct authors who have viewed their own articles. The goal is to identify authors who appear as viewers in the Views table where their author_id matches viewer_id.  

**Example Input:**
  ```
  Views Table:
  +------------+-----------+-----------+------------+
  | article_id | author_id | viewer_id | view_date  |
  +------------+-----------+-----------+------------+
  | 1          | 3         | 5         | 2019-08-01 |
  | 1          | 3         | 6         | 2019-08-02 |
  | 2          | 7         | 7         | 2019-08-01 |
  | 2          | 7         | 6         | 2019-08-02 |
  | 4          | 7         | 1         | 2019-07-22 |
  | 3          | 4         | 4         | 2019-07-21 |
  | 3          | 4         | 4         | 2019-07-21 |
  +------------+-----------+-----------+------------+

  Example Output:
  +------+
  | id   |
  +------+
  | 4    |
  | 7    |
  +------+
  ```
  
- Explanation:
  1. Author 4 viewed their own article on 2019-07-21.
  2. Author 7 viewed their own article on 2019-08-01.
  3. Other authors did not view their own articles.
---

## **Solutions Overview**
### **DISTINCT  Approach (Oracle SQL)**
1. Filter rows where author_id matches viewer_id
   - This ensures we only retrieve authors who viewed their own articles.
2. Use DISTINCT to avoid duplicate author entries
   - Ensures each author appears only once in the result.
3. Order results by author_id
   - For better readability and consistency.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT DISTINCT author_id AS id
  FROM Views
  WHERE author_id = viewer_id
  ORDER BY author_id;
  ```
  
---

## **Use Cases**
1. Content Engagement Analysis: Identify authors who interact with their own content.
2. User Behavior Insights: Understand whether authors self-review their work.
3. Data Integrity Checks: Ensure accurate tracking of content interactions.  

### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
