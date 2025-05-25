# 🏠 Real Estate Portal System Project 
This project is Real Estate Portal System Project implemented using Data Structure in [C++]. It includes UI elements, credential verification, and basic form validation.


# 📌 Description
This project focuses on creating a real estate portal that facilitates users in searching, comparing, and managing property listings.
The system will enable users to access detailed information on properties, including descriptions, and essential features, to aid in their decision-making process.
Users can list their properties, providing necessary details to attract potential buyers.
The system will also offer a comparison tool allowing the evaluation of properties side by side based on various criteria.


# 🚀 Features
## 🔐 For Users:
- Account Management: Register, log in, and manage profiles.
- Property Listings: Submit new properties with details like (name, location, price,...) to Admmin to approve it or reject it.
- Search Functionality: Search for properties using filters such as (location, price range,...).
- Property Comparison: Compare up to four properties side-by-side by key features.
## 🛠 For Admins:
- Dashboard Access: Log in to access the admin dashboard.
- Manage Listings: Add, remove, edit, and highlight property listings.
- User Management: Approve listings and moderate users.


# 💾 Data Structures Used
- map for storing user accounts efficiently.
- list for managing insertion and deletion of property listings.
- queue for searching

# 📂 File Handling
The system reads from and writes to files to preserve user and property data across sessions.
- On Startup: The application loads existing users and property listings from files.
- On Exit: All changes made during the session are saved back to files.
- Basic error handling is implemented for file I/O, such as missing files or invalid formats.


# How to Run
1. Open Login_Page.sln in Visual Studio
2. Build the solution
3. Run the application

# important note
- first admin make it from file: go to ...\Login_Page\Users.txt and change second number 0 --> 1 to mark user as admin
- the admin can add another admin
