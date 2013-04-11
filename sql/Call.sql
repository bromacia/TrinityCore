INSERT INTO `spell_proc_event` VALUES('70803', '0', '8', '4063232', '8', '0', '0', '0', '0', '0', '0');

Fix Master's Call Inmunity

Removes Master's Call stun immunity.
INSERT INTO `spell_linked_spell`(`spell_trigger`, `spell_effect`, `type`, `comment`) VALUES (54216,-56651,1,'Removes Master''s Call stun immunity');
