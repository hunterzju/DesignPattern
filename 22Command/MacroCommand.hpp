#pragma once
#include "ICommand.hpp"
#include <vector>

class MacroCommand : public ICommand {
public:
    ~MacroCommand() {
        Clear();
    }

    virtual void Execute() override {
        for (auto cmd : m_commandList) {
            cmd->Execute();
        }
    }

    void AddCommand(ICommand *cmd) {
        m_commandList.push_back(cmd);
    }

    void Clear() {
        for (auto cmd : m_commandList) {
            delete cmd;
        }
        m_commandList.clear();
    }

private:
    std::vector<ICommand *> m_commandList;
};
