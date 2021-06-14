#ifndef STORAGE_LEVELDB_UTIL_CODING_H_
#define STORAGE_LEVELDB_UTIL_CODING_H_

// least-significant byte first
// 支持变长encoding
// 字符串编码时以商都开头 varint
#include <cstdint>
#include <cstring>
#include <string>

#include "leveldb/slice.h"
#include "port/port.h"

namespace leveldb {

void PutFixed32(std::string* dst, uint32_t value);
void PutFixed64(std::string* dst, uint64_t value);


}  // namespace leveldb

#endif  // STORAGE_LEVELDB_UTIL_CODING_H_
