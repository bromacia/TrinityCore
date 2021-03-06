#include "ScriptPCH.h"
#include "Channel.h"
 
class System_Censure : public PlayerScript
{
public:
        System_Censure() : PlayerScript("System_Censure") {}
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg)
        {
                CheckMessage(player, msg, lang, NULL, NULL, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Player* receiver)
        {
                CheckMessage(player, msg, lang, receiver, NULL, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Group* group)
        {
                CheckMessage(player, msg, lang, NULL, group, NULL, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Guild* guild)
        {
                CheckMessage(player, msg, lang, NULL, NULL, guild, NULL);
        }
 
        void OnChat(Player* player, uint32 /*type*/, uint32 lang, std::string& msg, Channel* channel)
        {
                CheckMessage(player, msg, lang, NULL, NULL, NULL, channel);
        }
 
void CheckMessage(Player* player, std::string& msg, uint32 lang, Player* /*receiver*/, Group* /*group*/, Guild* /*guild*/, Channel* channel)
{
    //if (player->isGameMaster() || lang == LANG_ADDON)
            //return;
 
    // transform to lowercase (for simpler checking)
    std::string lower = msg;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
 
    uint8 cheksSize = 80;
    std::string checks[80];
    checks[0] ="http://";
    checks[1] =".com";
    checks[2] =".www";
    checks[3] =".net";
    checks[4] =".org";
    checks[5] =".ru";
    checks[6] ="www.";
    checks[7] ="wow-";
    checks[8] ="-wow";
    checks[9] ="eu";
    checks[10] ="no-ip";
    checks[11] =".zapto";
    checks[12] ="wow-cool";
    checks[13] ="elgracia";
    checks[14] ="spzone";
    checks[15] ="fakewow";
    checks[16] ="deathside";
    checks[17] ="warsong";
    checks[18] ="RiverRise";
    checks[19] ="air-world";
    checks[20] =".lt";
    checks[21] ="sirus";
    checks[22] ="backkor";
    checks[23] ="isengard";
    checks[24] ="wowcircle";
    checks[25] ="izbooshka";
    checks[26] ="magic";
	checks[27] ="PEDERAS";
	checks[28] ="pedal";
    checks[29] ="gei";
    checks[30] ="shibanqk";
    checks[31] ="kopele";
    checks[32] ="kopelence";
    checks[33] ="gei";
    checks[34] ="lainar";
    checks[35] ="guz";
    checks[36] ="kurva";
    checks[37] ="blackdevilbg";
    checks[38] ="battlearenas";
    checks[39] ="molten";
    checks[40] ="molten-wow";
    checks[41] ="zhyper";
    checks[42] ="zhyper-wow";
    checks[43] ="frostfire-wow";
    checks[44] ="neverendless-wow";
    checks[45] ="pomia";
    checks[46] ="azis";
    checks[47] ="negur";
    checks[48] ="negar";
    checks[49] ="ciganin";
    checks[50] ="mangal";
    checks[51] ="cingo";
    checks[52] ="chernio";
    checks[53] ="chernilko";
    checks[54] ="bokluk";
	checks[55] ="idiot";
    checks[56] ="lainar";
    checks[57] ="malumnik";
    checks[58] ="pomak";
    checks[59] ="arbain";
    checks[60] ="svirka";
    checks[61] ="svirkajia";
    checks[62] ="kurvoletina";
    checks[63] ="kuchka";
    checks[64] ="shiban";
    checks[65] ="travestit";
    checks[66] ="kaput";
    checks[67] ="hetero";
	    checks[68] ="putka";
    checks[69] ="eban";
    checks[70] ="ebah";
    checks[71] ="sfirka";
    checks[72] ="anal";
    checks[73] ="analen";
    checks[74] ="uralen";
    checks[75] ="maika ti";
    checks[76] ="ti eba";
    checks[77] ="kelesh";
    checks[78] ="keleme";
    checks[79] ="vinkel";
    for (int i = 0; i < 80; ++i)
        if (lower.find(checks[i]) != std::string::npos)
        {
            msg = "";
            ChatHandler(player->GetSession()).PSendSysMessage("");         
            return;
        }
} 
};
 
void AddSC_System_Censure()
{
    new System_Censure();
}