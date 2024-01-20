const fs = require('fs');
const path = require('path');

const dataFilePath = path.join(__dirname, 'data', 'students-data.json');

function readDataFile() {
    return new Promise((resolve, reject) => {
        fs.readFile(dataFilePath, 'utf8', (err, data) => {
            if (err) reject(err);
            else resolve(JSON.parse(data));
        });
    });
}

function writeDataFile(data) {
    return new Promise((resolve, reject) => {
        fs.writeFile(dataFilePath, JSON.stringify(data, null, 2), 'utf8', err => {
            if (err) reject(err);
            else resolve();
        });
    });
}

function getAllStudents() {
    return readDataFile();
}

function deleteStudent(sid) {
    return readDataFile()
        .then(students => {
            const filteredStudents = students.filter(s => s.sid != sid);
            return writeDataFile(filteredStudents).then(() => ({ message: "Deleted successfully" }));
        });
}

module.exports = {
    getAllStudents,
    deleteStudent
};
