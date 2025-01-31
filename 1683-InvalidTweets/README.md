# **Invalid Tweets**

## **Problem Statement**
This query retrieves a list of tweet IDs where the tweet content exceeds 15 characters. The goal is to identify tweets that are too long according to the platform's validation criteria.  

**Example Input:**
  ```
  Tweets table:
  +----------+-----------------------------------+
  | tweet_id | content                           |
  +----------+-----------------------------------+
  | 1        | Let us Code                       |
  | 2        | More than fifteen chars are here! |
  +----------+-----------------------------------+

  Example Output:
  +----------+
  | tweet_id |
  +----------+
  | 2        |
  +----------+
  ```
  
- Explanation:
  1. Tweet 1 has a length of 11 characters and is valid.
  2. Tweet 2 has a length of 33 characters and is invalid.
---

## **Solutions Overview**
### **LENGTH Function Approach (Oracle SQL)**
1. Filter tweets where the content length exceeds 15 characters
   - The LENGTH(content) function determines the number of characters in a tweet.
2. Return only the tweet IDs of invalid tweets
   - The output should contain only tweet_id where the length condition is met.
   
- Language: Oracle SQL
- Code:
  ```
  SELECT tweet_id
  FROM Tweets
  WHERE LENGTH(content) > 15;
  ```
  
---

## **Use Cases**
1. Content Moderation: Identify and handle tweets exceeding length limits.
2. User Experience Optimization: Enforce character limits for better readability.
3. Data Validation: Ensure compliance with predefined content constraints

### **Future Plans**
- Add implementations in other languages, such as MySQL.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
