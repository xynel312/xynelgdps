    #include <Geode/Geode.hpp>
    #include <Geode/modify/AchievementManager.hpp>
    #include <Geode/modify/AchievementCell.hpp>
    #include <Geode/modify/LevelTools.hpp>
    #include <Geode/modify/GJDifficultySprite.hpp>
    #include <Geode/modify/GameLevelManager.hpp>
    #include <Geode/modify/GameManager.hpp>
    #include <Geode/modify/LevelCell.hpp>
    #include <Geode/modify/CreatorLayer.hpp>
    #include <Geode/modify/LevelInfoLayer.hpp>
    #include <Geode/modify/GJGameLevel.hpp>
    #include <Geode/modify/PlayLayer.hpp>
    using namespace geode::prelude;
    class $modify(NewMainLevels, GameLevelManager) {
    public:
    GJGameLevel* getMainLevel(int levelID, bool dontGetLevelString) {
        if (levelID == 1) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48001, dontGetLevelString);
        gaming->m_levelName = "Balancer";
        gaming->m_audioTrack = 250;
        return gaming;
        }
        if (levelID == 2) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48002, dontGetLevelString);
        gaming->m_levelName = "Byzantine";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 251;
        gaming->m_difficulty = GJDifficulty::Normal;
        gaming->m_stars = 2;
        return gaming;
        }
        if (levelID == 3) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48003, dontGetLevelString);
        gaming->m_levelName = "Spacefighter";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 252;
        gaming->m_difficulty = GJDifficulty::Normal;
        gaming->m_stars = 3;
        return gaming;
        }
        if (levelID == 4) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48004, dontGetLevelString);
        gaming->m_levelName = "Field of Memories";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 253;
        gaming->m_difficulty = GJDifficulty::Hard;
        gaming->m_stars = 4;
        return gaming;
        }
        if (levelID == 5) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48005, dontGetLevelString);
        gaming->m_levelName = "Metropolis";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 254;
        gaming->m_difficulty = GJDifficulty::Hard;
        gaming->m_stars = 5;
        return gaming;
        }
        if (levelID == 6) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48006, dontGetLevelString);
        gaming->m_levelName = "Solar Wind";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 255;
        gaming->m_difficulty = GJDifficulty::Hard;
        gaming->m_stars = 6;
        return gaming;
        }
        if (levelID == 7) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48007, dontGetLevelString);
        gaming->m_levelName ="Hyperspin";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 256;
        gaming->m_difficulty = GJDifficulty::Harder;
        gaming->m_stars = 7;
        return gaming;
        }
        if (levelID == 8) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48008, dontGetLevelString);
        gaming->m_levelName = "RadioCutter";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 257;
        gaming->m_difficulty = GJDifficulty::Harder;
        gaming->m_stars = 8;
        return gaming;
        }
        if (levelID == 9) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(48009, dontGetLevelString);
        gaming->m_levelName = "Winterbliss";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 258;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 9;
        return gaming;
        }
        if (levelID == 10) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 11) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 12) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 13) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 14) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 15) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 16) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 17) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 18) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 19) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 20) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 21) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        if (levelID == 22) {
        auto gaming = GameLevelManager::sharedState()->GameLevelManager::getMainLevel(10, dontGetLevelString);
        gaming->m_levelName = "Coming in 3.1.1";
        gaming->m_songID = 0;
        gaming->m_audioTrack = 0;
        gaming->m_difficulty = GJDifficulty::Insane;
        gaming->m_stars = 0;
        return gaming;
        }
        return GameLevelManager::sharedState()->GameLevelManager::getMainLevel(levelID, dontGetLevelString);
        };
        class $modify(achievements, PlayLayer) {
        public:
        auto showCompleteText() {
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48001)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level01b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48002)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level02b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48003)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level03b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48004)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level04b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48005)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level05b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48006)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level06b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48007)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level07b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48008)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level08b", 100, 0);
        }
        if (GameStatsManager::sharedState()->hasCompletedMainLevel(48009)) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level09b", 100, 0);
        }
        if (m_level->m_levelID == 48001) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level01a", 100, 0);
        }
        if (m_level->m_levelID == 48002) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level02a", 100, 0);
        }
        if (m_level->m_levelID == 48003) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level03a", 100, 0);
        }
        if (m_level->m_levelID == 48004) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level04a", 100, 0);
        }
        if (m_level->m_levelID == 48005) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level05a", 100, 0);
        }
        if (m_level->m_levelID == 48006) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level06a", 100, 0);
        }
        if (m_level->m_levelID == 48007) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level07a", 100, 0);
        }
        if (m_level->m_levelID == 48008) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level08a", 100, 0);
        }
        if (m_level->m_levelID == 48009) {
        GameManager::sharedState()->reportAchievementWithID("geometry.ach.level09a", 100, 0);
        }
        PlayLayer::showCompleteText();
        };
        class $modify(songs, LevelTools) {
        public:
        static std::string getAudioFileName(int songID) {
        if (songID == 250) { 
        return "Balancer.mp3";
        }
        if (songID == 251) { 
        return "Byzantine.mp3";
        }
        if (songID == 252) {
        return "Spacefighter.mp3";
        }
        if (songID == 253) {
        return "FieldOfMemories.mp3";
        }
        if (songID == 254) { 
        return "Metropolis.mp3";
        }
        if (songID == 255) { 
        return "SolarWind.mp3";
        }
        if (songID == 256) {
        return "Hyperspin.mp3";
        }
        if (songID == 257) {
        return "RadioCutter.mp3";
        }
        if (songID == 258) { 
        return "Winterbliss.mp3";
        }
        if (songID == 0) { 
        return "Balancer.mp3";
        }
        if (songID == 1) { 
        return "Byzantine.mp3";
        }
        if (songID == 2) {
        return "Spacefighter.mp3";
        }
        if (songID == 3) {
        return "FieldOfMemories.mp3";
        }
        if (songID == 4) {
        return "Metropolis.mp3";
        }
        if (songID == 5) {
        return "SolarWind.mp3";
        }
        if (songID == 6) {
        return "Hyperspin.mp3";
        }
        if (songID == 7) {
        return "RadioCutter.mp3";
        }
        if (songID == 8) {
        return "Winterbliss.mp3";
        }
        return LevelTools::getAudioFileName(songID);
        }
        static std::string getAudioTitle(int songID) {
        if (songID == 0) {
        return "Balancer";
        }
        if (songID == 1) {
        return "Byzantine";
        };
        if (songID == 2) {
        return "Spacefighter";
        };
        if (songID == 3) {
        return "Field of Memories";
        };
        if (songID == 4) {
        return "Metropolis";
        };
        if (songID == 5) {
        return "Solar Wind";
        };
        if (songID == 6) {
        return "Hyperspin";
        };
        if (songID == 7) {
        return "RadioCutter";
        };
        if (songID == 8) {
        return "Winterbliss";
        };
        if (songID > 9) {
        return "NA";
        }
        return LevelTools::getAudioTitle(songID);
        }
        static std::string nameForArtist(int ArtistID) {
        if (ArtistID == 3) {
        return "DJVI";
        };
        if (ArtistID == 0) {
        return "Waterflame";
        };
        if (ArtistID == 4) {
        return "cycerin";
        };
        return LevelTools::nameForArtist(ArtistID);
        };
        static std::string urlForAudio(int ID) {
        if (ID == 0) {
        return "https://www.newgrounds.com/audio/listen/371274";
        }
        if (ID == 1) {
        return "https://www.youtube.com/watch?v=bwAz2gdglU0";
        }
        if (ID == 2) {
        return "https://www.newgrounds.com/audio/listen/296081";
        }
        if (ID == 3) {
        return "https://www.youtube.com/watch?v=rVTzv9qLyko";
        }
        if (ID == 4) {
        return "https://www.youtube.com/watch?v=YK4SVmLINKI";
        }
        if (ID == 5) {
        return "https://www.newgrounds.com/audio/listen/493898";
        }
        if (ID == 6) {
        return "https://www.youtube.com/watch?v=E5ATxOj2dSM";
        }
        if (ID == 7) {
        return "https://www.youtube.com/watch?v=gy3eH4ffVtw";
        }
        if (ID == 8) {
        return "https://www.newgrounds.com/audio/listen/117474";
        }
        if (ID > 9) {
        return "";
        }
        return LevelTools::urlForAudio(ID);
        };
        static std::string ytURLForArtist(int artistID) {
        if (artistID == 3) {
        return "https://www.youtube.com/channel/UCV8yIaKoqa-r9SnXPMQ1Spg";
        };
        if (artistID == 0) {
        return "https://www.youtube.com/channel/UCVuv5iaVR55QXIc_BHQLakA";
        };
        if (artistID == 4) {
        return "https://www.youtube.com/@cycerin";
        };
        return LevelTools::ytURLForArtist(artistID);
        };
        static std::string ngURLForArtist(int artistID) {
        if (artistID == 3) {
        return "https://djvi.newgrounds.com/";
        };
        if (artistID == 0) {
        return "https://waterflame.newgrounds.com/";
        };
        if (artistID == 4) {
        return "https://cycerin.newgrounds.com/";
        };
        return LevelTools::ngURLForArtist(artistID);
        };
        static std::string fbURLForArtist(int artistID) {
        if (artistID == 3) {
        return "https://www.facebook.com/DJVITechno";
        };
        if (artistID == 0) {
        return "https://www.facebook.com/pages/Waterflame/210371073165";
        };
        if (artistID == 4) {
        return "";
        };
        return LevelTools::ngURLForArtist(artistID);
        }

class $modify(TestAchManager, AchievementManager) { // thanks chumiu

    void replaceAchievement(std::string achievementID, std::string title, std::string desc, std::string unachDesc, std::string iconValue, int limits) {

        auto achDict = sharedState()->m_platformAchievements->objectForKey(achievementID.c_str());

        if (auto dict = typeinfo_cast<CCDictionary*>(achDict)) {
            dict->removeObjectForKey("title");
            dict->removeObjectForKey("achievedDescription");
            dict->removeObjectForKey("unachievedDescription");
            dict->removeObjectForKey("icon");
            dict->removeObjectForKey("limits");

            dict->setObject(CCString::create(title), "title");
            dict->setObject(CCString::create(desc), "achievedDescription");
            dict->setObject(CCString::create(unachDesc), "unachievedDescription");
            dict->setObject(CCString::create(iconValue), "icon");
            dict->setObject(CCString::create(std::to_string(limits)), "limits");
        }
    }

    void addManualAchievements() {
        
        AchievementManager::addManualAchievements();
        //here you can replace any achievement
        replaceAchievement("geometry.ach.level01a", "It begins...", "Completed Balancer in Practice mode", "Complete Balancer in Practice mode", "color_04", 1);
        replaceAchievement("geometry.ach.level01b", "Balancer!", "Completed Balancer in Normal mode", "Complete Balancer in Normal mode", "icon_05", 1);
        replaceAchievement("geometry.ach.level02a", "Jump pads my beloved", "Completed Byzantine in Practice mode", "Complete Byzantine in Practice mode", "color_05", 1);
        replaceAchievement("geometry.ach.level02b", "Byzantine!", "Completed Byzantine in Normal mode", "Complete Byzantine in Normal mode", "icon_06", 1);
        replaceAchievement("geometry.ach.level03a", "Outerspace", "Completed Spacefighter in Practice mode", "Complete Spacefighter in Practice mode", "color_06", 1);
        replaceAchievement("geometry.ach.level03b", "Spacefighter!", "Completed Spacefighter in Normal mode", "Complete Spacefighter in Normal mode", "icon_07", 1);
        replaceAchievement("geometry.ach.level04a", "Nostalgia", "Completed Field of Memories in Practice mode", "Complete Field of Memories in Practice mode", "color_07", 1);
        replaceAchievement("geometry.ach.level04b", "Field of Memories!", "Completed Field of Memories in Normal mode", "Complete Field of Memories in Normal mode", "icon_08", 1);
        replaceAchievement("geometry.ach.level05a", "Welcome to metropolis!", "Completed Metropolis in Practice mode", "Complete Metropolis in Practice mode", "color_08", 1);
        replaceAchievement("geometry.ach.level05b", "Metropolis!", "Completed Metropolis in Normal mode", "Complete Metropolis in Normal mode", "icon_09", 1);
        replaceAchievement("geometry.ach.level06a", "Aurora", "Completed Solar Wind in Practice mode", "Complete Solar Wind in Practice mode", "color_09", 1);
        replaceAchievement("geometry.ach.level06b", "Solar Wind!", "Completed Solar Wind in Normal mode", "Complete Solar Wind in Normal mode", "icon_10", 1);
        replaceAchievement("geometry.ach.level07a", "Hyperdrive", "Completed Hyperspin in Practice mode", "Complete Hyperspin in Practice mode", "color_10", 1);
        replaceAchievement("geometry.ach.level07b", "Hyperspin!", "Completed Hyperspin in Normal mode", "Complete Hyperspin in Normal mode", "icon_11", 1);
        replaceAchievement("geometry.ach.level08a", "Jet Set", "Completed RadioCutter in Practice mode", "Complete RadioCutter in Practice mode", "color_12", 1);
        replaceAchievement("geometry.ach.level08b", "RadioCutter!", "Completed RadioCutter in Normal mode", "Complete RadioCutter in Normal mode", "icon_14", 1);
        replaceAchievement("geometry.ach.level09a", "Glacier", "Completed Winterbliss in Practice mode", "Complete Winterbliss in Practice mode", "icon_15", 1);
        replaceAchievement("geometry.ach.level09b", "Winterbliss!", "Completed Winterbliss in Normal mode", "Complete Winterbliss in Normal mode", "icon_16", 1);
        replaceAchievement("geometry.ach.level10a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level10b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level11a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level11b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level12a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level12b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level13a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level13b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level14a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level14b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level15a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level15b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level16a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level16b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level17a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level17b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level18a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level18b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level19a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level19b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level20a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level20b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level21a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level21b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level22a", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        replaceAchievement("geometry.ach.level22b", "Coming Soon", "More levels coming soon, stay tuned", "More levels coming soon, stay tuned", "icon_17", 1);
        };
        class $modify(LSLevelInfoLayer, LevelInfoLayer) 
{
void updateLabelValues()
    {
        LevelInfoLayer::updateLabelValues();
        
        if (m_level->m_isEpic == 4)
            m_difficultySprite->updateFeatureState(static_cast<GJFeatureState>(5));

    }
};
class $modify(aa, LevelCell) // thanks chumiu, again
{
    void loadCustomLevelCell() {
        
        LevelCell::loadCustomLevelCell();

        if (m_mainLayer)
        {
            if(m_level->m_isEpic == 4)
            {
                auto container = m_mainLayer->getChildByID("difficulty-container");
                if (container)
                    container->getChildByType<GJDifficultySprite*>(0)->updateFeatureState(static_cast<GJFeatureState>(5));
            }
}
};
class $modify(LSDifficultySprite, GJDifficultySprite)
{
void updateFeatureState(GJFeatureState p0) 
    {

        int cast = static_cast<int>(p0);

        if (cast == 5) p0 = GJFeatureState::Featured; //or mythic if u want particles

        GJDifficultySprite::updateFeatureState(p0);

       

        //New rate texture
        if (cast == 5)
        {
            auto rateCoin = CCSprite::createWithSpriteFrameName("GJ_featuredCoinChallenge_001.png");

            auto epicCoin = getChildByType<CCSprite*>(0);
            if (epicCoin)
                epicCoin->setDisplayFrame(rateCoin->displayFrame());

                        }

                    };
                };
            };
        };
    };
};
};