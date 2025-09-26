local Rayfield = loadstring(game:HttpGet('https://sirius.menu/rayfield'))()
local Window = Rayfield:CreateWindow({
    Name = "Quest Starter",
    LoadingTitle = "Quest Starter",
    LoadingSubtitle = "by Chronic",
    ConfigurationSaving = { Enabled = true, FolderName = "QuestStarter", FileName = "Config" },
    Discord = { Enabled = false },
    KeySystem = false
})

-- Load Quests tab (your modular version)
local createQuestsTab = loadstring(game:HttpGet("https://raw.githubusercontent.com/OMchronicwtf/chronicsjjsestuffzies/refs/heads/main/Quests%20Tab"))()
createQuestsTab(Rayfield, Window)

-- Load AutoFarm tab
local createAutoFarmTab = loadstring(game:HttpGet("https://raw.githubusercontent.com/OMchronicwtf/chronicsjjsestuffzies/refs/heads/main/Autofarm%20Tab"))()
createAutoFarmTab(Rayfield, Window)

Rayfield:LoadConfiguration()
