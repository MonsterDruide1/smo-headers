#pragma once

class TimeBalloonMessageTagHolder
{
public:
    TimeBalloonMessageTagHolder(al::EventFlowExecutor*);
    setPlayerName(char const*);
    isExistPlayerName() const;
};
