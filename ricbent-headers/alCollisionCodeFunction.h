#pragma once

namespace alCollisionCodeFunction {

tyrCreateCollisionCodeList(char const*);
tyrGetCollisionRelationList(al::CollisionCodeList const*, char const*);
getCodeNameByIdx(al::CollisionCodeList const*, int);
getDispNameByIdx(al::CollisionCodeList const*, int);
getIdxByCodeName(al::CollisionCodeList const*, char const*);
isExistCodeName(al::CollisionCodeList const*, char const*);
isValidUserType(al::CollisionCodeList const*, char const*);
judgeIsBetterCodeName(al::CollisionCodeList const*, char const*, char const*, char const*, char const*);
judgeIsBetterCodeNameWithAreaName(al::CollisionCodeRelationList const*, char const*, char const*, char const*, char const*, char const*, char const*);

} 
