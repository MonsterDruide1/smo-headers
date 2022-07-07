#pragma once

namespace alExecutorFunction {

isListName(al::ExecuteOrder const&, char const*);
isUpdateListActor(al::ExecuteOrder const&);
isDrawListActor(al::ExecuteOrder const&);
isDrawListActorModel(al::ExecuteOrder const&);
isDrawListLayout(al::ExecuteOrder const&);
calcExecutorListNumMax(al::ExecuteOrder const*, int, char const*);
calcUpdateListActorNumMax(al::ExecuteOrder const*, int);
calcDrawListActorNumMax(al::ExecuteOrder const*, int);
calcDrawListActorModelNumMax(al::ExecuteOrder const*, int);
calcDrawListLayoutNumMax(al::ExecuteOrder const*, int);

} 
