#pragma once

namespace SaveDataAccessFunction {

startSaveDataInit(GameDataHolder*);
startSaveDataInitSync(GameDataHolder*);
startSaveDataLoadFile(GameDataHolder*);
startSaveDataReadSync(GameDataHolder*);
startSaveDataReadAll(GameDataHolder*);
startSaveDataWrite(GameDataHolder*);
startSaveDataWriteWithWindow(GameDataHolder*);
startSaveDataCopyWithWindow(GameDataHolder*, int, int);
startSaveDataDeleteWithWindow(GameDataHolder*, int);
startSaveDataWriteSync(GameDataHolder*);
updateSaveDataAccess(GameDataHolder*, bool);
isEnableSave(GameDataHolder const*);
isDoneSave(GameDataHolder*);

} 
