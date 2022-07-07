#pragma once

class SphinxQuizData
{
public:
    SphinxQuizData(int);
    init();
    answerCorrectSphinxQuiz(int);
    answerCorrectSphinxQuizAll(int);
    isAnswerCorrectSphinxQuiz(int) const;
    isAnswerCorrectSphinxQuizAll(int) const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
