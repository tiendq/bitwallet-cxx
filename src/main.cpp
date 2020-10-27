#include <exception>
#include <iostream>
#include <string>
#include <SQLiteCpp/SQLiteCpp.h>

int main(int argc, char **argv) {
	std::cout << "Hello CMake!\n";

	try {
		std::cout << "SQLite3 version " << SQLite::VERSION << " (" << SQLite::getLibVersion() << ")\n";

		SQLite::Database db("test.db3", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);
		db.exec("DROP TABLE IF EXISTS test");
		db.exec("CREATE TABLE test (id INTEGER PRIMARY KEY, value TEXT)");

		std::string sql = "INSERT INTO test VALUES (NULL, 'first')";
		int n = db.exec(sql);
		std::cout << n << "\n";
	} catch (std::exception const &e) {
    std::cout << "SQLite exception: " << e.what() << "\n";
    return 1;
  }

	return 0;
}
