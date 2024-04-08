#ifndef __Database_h__
#define __Database_h__

class Database {
public:
	Database() = default;
	Database(const Database&) = delete;
	Database operator=(const Database&) = delete;

	static Database* getInstance();
	bool executeQuery();
};

#endif // !__Database_h__
