// Setup
const express = require('express');
const dataService = require('./data-service');
const app = express();
const HTTP_PORT = process.env.PORT || 8080;

// Middleware
app.use(express.json());

// Routes
// Get all students
app.get('/api/students', (req, res) => {
    dataService.getAllStudents().then(data => res.json(data)).catch(err => res.status(500).send(err));
});

// Delete student
app.delete('/api/students/:sid', (req, res) => {
    dataService.deleteStudent(req.params.sid).then(data => res.json(data)).catch(err => res.status(500).send(err));
});

// Start server
app.listen(HTTP_PORT, () => console.log(`Server running on port ${HTTP_PORT}`));
