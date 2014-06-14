<?php
// The English locale

// Roles
$en_US["seer"]="Sheriff";
$en_US["wolf"]="Hitman";
$en_US["cursed"]="Cursed Civilian";
$en_US["drunk"]="Town Drunk";
$en_US["harlot"]="Town Whore";
$en_US["traitor"]="Traitor";
$en_US["gunner"]="Gunner";
$en_US["crow"]="Spy";
$en_US["angel"]="Doctor";
$en_US["detective"]="Detective";
$en_US["ghost"]="Ghost";
$en_US["villager"]="Civilian";

$en_US["seer_plural"]="Sheriffs";
$en_US["wolf_plural"]="Hitmen";
$en_US["cursed_plural"]="Cursed Civilians";
$en_US["drunk_plural"]="Town Drunks";
$en_US["harlot_plural"]="Town Whores";
$en_US["traitor_plural"]="Traitors";
$en_US["gunner_plural"]="Gunners";
$en_US["crow_plural"]="Spies";
$en_US["angel_plural"]="Doctors";
$en_US["detective_plural"]="Detectives";
$en_US["ghost_plural"]="Ghosts";
$en_US["villager_plural"]="Civilians";

// Before Game
$en_US["game_start"]="<bold>%answer1%</bold> has started a game of PHPMafia. Type \".join\" to join. Type \".start\" to start the game. Type \".wait\" to increase join wait time.";
$en_US["game_wait"]="Please wait at least %answer1% more seconds.";
$en_US["game_required"]="%answer1%: Four or more players are required to play.";
$en_US["game_welcome"]="%answer1%: Welcome to PHPMafia, the popular detective/social party game. Remember to read the .rules!";

// Night time
$en_US["night_first"]="It is now night time. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning as you're probably a civilian.";
$en_US["night_turn"]="Day lasted <bold>%answer1%</bold>. It is now night time. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning.";
$en_US["night_victim"]="The mob drags a protesting <bold>%answer1%</bold> to the hanging tree. They succumb to the will of the horde, and is hanged. It is discovered they were a %answer2%.";

// Day time turn
$en_US["day_turn"]="Night lasted <bold>%answer1%</bold>. It is now day time. The civilians awake, thankful for surviving the night, and search the town... ";
$en_US["day_victim"]="The dead body of <bold>%answer1%</bold>, a %answer2%, is found. Those remaining mourn their death.";
$en_US["day_nokill"]="The body of a kitten is found. All civilians, however, have survived.";
$en_US["day_harlot"]="The hitmen's selected victim was a town whore, but luckily she wasn't home.";
$en_US["day_harlot_dead"]="<bold>%answer1%</bold>, a <bold>town whore</bold>, made the unfortunate mistake of visiting a hitman's house last night and is now dead.";
$en_US["day_angel"]="<bold>%answer1%</bold> was attacked by the hitmen last night, but luckily, the doctor protected them.";
$en_US["day_angel_dead"]="<bold>%answer1%</bold>, a <bold>doctor</bold> made the unfortunate mistake of guarding a hitman last night, attempted to escape, but failed and is now dead.";
$en_US["day_vote"]="The civilians must now vote for whom to hang. Use \".lynch <nick>\" to cast your vote. %answer1% votes are required to hang.";

// Game phase turning
$en_US["night_warn"]="<bold>A few civilians awake early and notice it is still dark outside. The night is almost over and there are still whispers heard in the village.</bold>";
$en_US["day_warn"]="<bold>As the sun sinks inexorably toward the horizon, turning the lanky pine trees into fire-edged silhouettes, the civilians are reminded that very little time remains for them to reach a decision; if darkness falls before they have done so, the majority will win the vote. No one will be lynched if there are no votes or an even split.</bold>";

// Maintenance
$en_US["idle_warn"]="%answer1%: <bold>You have been idling for a while. Please say something soon or you might be declared dead.</bold>";
$en_US["idle_die"]="<bold>auror</bold> didn't get out of bed for a very long time. They are declared dead. Appears they were a <bold>sheriff</bold>.";

// Utilities
$en_US["help"]="(notice) Commands: <bold>help, quit, stats, start, retract, goat, votes, lynch, wait, join, rules, 8ball, coin, cookie</bold>";
$en_US["adminhelp"] = "(notice) Commands: <bold>fjoin, fquit, fnight, fday, fping, fstart, fgoat, fwait</bold>";
$en_US["ping"]="PING! %answer1%";
$en_US["coin_toss"]="<bold>%answer1%</bold> tosses a coin into the air...";
$en_US["coin_land"]="The coin lands on <bold>%answer1%</bold>";
$en_US["away"]="(notice) You are now marked as away.";
$en_US["back"]="(notice) You are no longer marked as away.";
$en_US["stats"]="%answer1%: <bold>%answer2%</bold> players: %answer3%";
$en_US["stats_none"]="%answer1%: There are no players.";
$en_US["stats_roles"]="%answer1%: There is %answer2%";
$en_US["wait"]="<bold>%answer1%</bold> increased the wait time by %answer2% seconds.";
$en_US["wait_reached"]="Limit has already been reached for extending the wait time.";
$en_US["rules_part1"]="PHPMafia game rules: 1) Be nice to others. 2) Do not share information after death. 3) No bots allowed. 4) Do not play with clones.";
$en_US["rules_part2"]="5) Do not quit unless you need to leave. 6) Do not paste PM's from the bot during the game. 7) Use common sense. 8) Waiting for timeouts is discouraged.";
$en_US["votes"]="%answer1%: %answer2%";
$en_US["votes_none"]="%answer1%: No votes yet.";
$en_US["votes_status"]="%answer1%: <bold>%answer2%</bold> players, <bold>%answer3%</bold> votes required to lynch, <bold>%answer4%</bold> players available to vote.";
$en_US["votes_night"]="Voting is only during the day.";
$en_US["goat"]="<bold>%answer1%</bold>'s goat walks by and kicks <bold>%answer2%</bold>";

// Game commands
$en_US["join"]="<bold>%answer1%</bold> has joined the game.";
$en_US["quit"]="<bold>%answer1%</bold> died of dysentery. They were a %answer2%.";
$en_US["lynch"]="<bold>%answer1%</bold> votes for <bold>%answer2%</bold>.";
$en_US["lynch_night"]="Lynching is only allowed during the day. Please wait patiently for morning.";
$en_US["lynch_resting"]="%answer1%: You are wounded and resting, thus you are unable to vote for the day.";
$en_US["retract"]="<bold>%answer1%</bold> retracted their vote.";
$en_US["retract_not"]="You haven't voted yet.";

// Notices
$en_US["game_none"]="No game is currently running.";
$en_US["ratelimit"]="This command is rate-limited. Please wait a while before using it again.";
$en_US["join_already_playing"]="You're already playing!";
$en_US["start_ongoing"]="PHPMafia is already in play.";
$en_US["not_playing"]="<bold>%answer1%</bold> is currently not playing.";
$en_US["not_playing_self"]="You're not currently playing.";
$en_US["not_admin"]="You are not an admin.";
$en_US["away"]="You are now marked as away.";
$en_US["not_away"]="You are not marked as away.";
$en_US["back"]="You are no longer marked as away.";
$en_US["parameters"]="Not enough parameters.";

// End Game
$en_US["win_villagers"]="Game over! All the hitmen are dead! The civilians bury their remains with their faces towards the ground.";
$en_US["win_wolves"]="Game over! There are the same number of hitmen as civilians. The hitmen kill everyone and win.";
$en_US["end_times"]="Game lasted <bold>%answer1%</bold>. <bold>%answer2%</bold> was day. <bold>%answer3%</bold> was night.";

$en_US["end_roles"]="The %answer1% was %answer2%.";
$en_US["end_roles_plural"]="The %answer1% were %answer2%.";

// Directions
$en_US["seer_assign"]="You are a <bold>sheriff</bold>. It is your job to detect hitmen, you may receive an anonymous tip once per night. Use \".see <nick>\" to see the role of a player. Remember to PM me your command.";
$en_US["seer_see"]="You received a tip that <bold>%answer1%</bold> is a %answer2%!";
$en_US["seer_see_not"]="Only a sheriff may use this command";
$en_US["seer_seen"]="You may only get one tip per round.";
$en_US["seer_see_self"]="You can't see yourself without a mirror. You don't have a mirror.";
$en_US["seer_see_day"]="You only get tips at night.";

$en_US["wolf_assign"]="You are a <bold>hitman</bold>. It is your job to kill all the civilians. Use \".kill <nick>\" to kill a civilian. Remember to PM me your command.";
$en_US["wolf_multiple"]="Also, if you PM me, your message will be relayed to other wolves.";
$en_US["wolf_kill"]="You have selected <bold>%answer1%</bold> to be killed.";
$en_US["wolf_kill_self"]="Suicide is bad. Don't do it.";
$en_US["wolf_relay"]="<bold>%answer1%</bold> says: %answer2%";

$en_US["drunk_assign"]="You have been drinking too much! You are the <bold>town drunk</bold>.";

$en_US["harlot_assign"]="You are a <bold>town whore</bold>. You may spend the night with one person per round. If you visit a victim of a hitman, or visit a hitman, you will die. Use .visit to visit a player.";
$en_US["harlot_visit"]="You are spending the night with <bold>%answer1%</bold>. Have a good time!";
$en_US["harlot_visit_not"]="Only a town whore may use this command.";
$en_US["harlot_visit_self"]="You have chosen to stay home for the night.";
$en_US["harlot_visited"]="You are already spending the night with <bold>%answer1%</bold>.";
$en_US["harlot_day"]="You may only visit someone at night.";
$en_US["harlot_dead"]="<bold>%answer1%<bold>, a <bold>town whore<bold>, made the unfortunate mistake of visiting the victim's house last night and is now dead.";

$en_US["traitor_assign"]="You are a <bold>traitor</bold>. You are exactly like a villager and not even a sheriff can see your true identity. Only detectives can.";
$en_US["traitor_transform"]="<bold>The civilians, during their celebrations, are frightened as they hear a shot. The hitmen are still here!</bold>";
$en_US["traitor_notify"]="You receive a call to become a hitman!";
$en_US["traitor_avenge"]="It is up to you to avenge your fallen hitmen!";

$en_US["gunner_assign"]="You hold a gun that shoots special homing bullets. You may only use it during the day. If you shoot a hitman, theywill die instantly, but if you shoot a civilian, they will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution. You get %answer1% bullets.";
$en_US["gunner_shoot"]="<bold>%answer1%</bold> shoots <bold>%answer2%</bold> with a homing bullet!";
$en_US["gunner_shoot_wolf"]="<bold>%answer1%</bold> is a hitman, and is dying from the homing bullet.";
$en_US["gunner_shoot_villager"]="<bold>%answer1%</bold> is a civilian and is injured but will have a full recovery. They will be resting for the day.";
$en_US["gunner_shoot_not"]="You don't have a gun.";
$en_US["gunner_shoot_self"]="You are holding it the wrong way.";
$en_US["gunner_nobullets"]="You don't have any more bullets.";
$en_US["gunner_shoot_manslaughter"]="<bold>%answer1%</bold> is a not a hitman but was accidentally fatally injured.";
$en_US["gunner_reveal"]="Appears they were a %answer1%.";
$en_US["gunner_miss"]="<bold>%answer1%</bold> is a lousy shooter. They missed!";
$en_US["gunner_suicide"]="<bold>%answer1%</bold> should clean their weapons more often. The gun exploded and killed themself!";
$en_US["gunner_night"]="Shooting is only allowed during the day. Please wait patiently for morning.";

$en_US["angel_assign"]="You are a <bold>doctor</bold>. It is your job to protect the civilians. If you guard a hitman, there is a 50/50 chance of you dying, if you guard a victim, they will live. Use .guard to guard a player.";
$en_US["angel_guard"]="You are protecting <bold>%answer1%</bold> tonight. Farewell!";
$en_US["angel_guard_notify"]="You can sleep well tonight, for a doctor is protecting you.";
$en_US["angel_guard_not"]="Only a doctor may use this command.";
$en_US["angel_guard_self"]="You may not guard yourself.";
$en_US["angel_guarded"]="You are already protecting <bold>%answer1%.</bold>";
$en_US["angel_day"]="You may only protect people at night.";

$en_US["detective_assign"]="You are a <bold>detective</bold>.";
$en_US["detective_assign2"]="It is your job to determine all the hitmen and traitors. Your job is during the day, and you can see the true identity of all users, even traitors.";
$en_US["detective_assign3"]="But, each time you use your ability, you risk a 2/5 chance of having your identity revealed to the wolves. So be careful. Use \".id\" to identify any player during the day.";
$en_US["detective_id"]="The results of your investigation have returned. <bold>%answer1%</bold> is a... %answer2%!";
$en_US["detective_id_not"]="Only a detective may use this command.";
$en_US["detective_id_self"]="You may not id yourself."; // NOT OFFICIAL
$en_US["detective_ided"]="You may only investigate one person per round.";
$en_US["detective_night"]="You may only investigate people during the day.";
$en_US["detective_revealed"]="<bold>%answer1%</bold> accidentally drops a paper. The paper reveals that they are a detective!";

$en_US["crow_assign"]="You are a <bold>spy</bold>. You are able to sneak at night. Use \".kill <nick>\" to kill a civilian. Alternatively, you can use \".observe <nick>\" to check if someone is in bed or not. Observing will prevent you from participating in a killing.";
$en_US["crow_observe"]="You down your sneak wear and sneak to <bold>%answer1%</bold>'s house. You will return after collecting your observations when day begins.";
$en_US["crow_observed"]="You are already sneaking to <bold>%answer1%</bold>'s house.";
$en_US["crow_observe_self"]="Instead of doing that, you should probably go kill someone.";
$en_US["crow_observe_wolf"]="Sneaking to a hitman's house is a waste of time.";
$en_US["crow_observe_day"]="You may only be a spy at night.";
$en_US["crow_not"]="Only a spy may use this command.";
$en_US["corw_killed"]="You have already selected <bold>%answer1%</bold> to be killed. You cannot kill and observe in the same night.";
$en_US["crow_observed_stayed"]="As the sun rises, you conclude that <bold>%answer1%</bold> was sleeping all night long, and you sneak back to your house.";
$en_US["crow_observed_got_up"]="As the sun rises, you conclude that <bold>%answer1%</bold> was not asleep all during the night, and you sneak back to your house.";

$en_US["ghost_assign"] = "You are a ghost. You will remain in the world of the living to finish your business. Happy haunting!";
$en_US["ghost_transform"] = "It appears that <bold>%answer1%</bold> came back as a ghost. Ooooh-OOOOH-Ooooh! They will remain in the game.";

$en_US["players_list"]="Players: %answer1%";

$en_US["roles"][] = "<bold>".$en_US["wolf"]."</bold>: Someone who tries to kill anyone they can get their hands on.";
$en_US["roles"][] = "<bold>".$en_US["seer"]."</bold>: ".$en_US["seer"]." can see one person each day to see their role. Careful though, they can be misled.";
$en_US["roles"][] = "<bold>".$en_US["harlot"]."</bold>: You may spend the night with one person per round. If you visit a victim of a ".$en_US["wolf"].", or visit a ".$en_US["wolf"].", you will die.";
$en_US["roles"][] = "<bold>".$en_US["angel"]."</bold>: It is your job to protect the ".$en_US["villager"].". If you guard a ".$en_US["wolf"].", there is a 50/50 chance of you dying, if you guard a victim, they will live.";
$en_US["roles"][] = "<bold>".$en_US["drunk"]."</bold>: I wanna go drunk, ".$en_US["seer"].", I'm home.";
$en_US["roles"][] = "<bold>".$en_US["villager"]."</bold>: Nothing to see here...you do nothing special.";
$en_US["roles"][] = "<bold>".$en_US["gunner"]."</bold>: You hold a gun that shoots special homing bullets. You may only use it during the day. If you shoot a ".$en_US["wolf"].", they will die instantly, but if you shoot a ".$en_US["villager"].", they will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution.";
$en_US["roles"][] = "<bold>".$en_US["detective"]."</bold>: It is your job to determine all the ".$en_US["wolf"]." and ".$en_US["traitor"].". Your job is during the day, and you can see the true identity of all users, even ".$en_US["traitor"]."."; 
$en_US["roles"][] = "<bold>".$en_US["traitor"]."</bold>: You are exactly like a ".$en_US["villager"]." and not even a ".$en_US["seer"]." can see your true identity. Only ".$en_US["detective"]." can. You turn into a ".$en_US["wolf"]." once they are all lynched.";
$en_US["roles"][] = "<bold>".$en_US["crow"]."</bold>: You are able to sneak at night. You can kill a ".$en_pir["villager"]." or you can see if they are in bed or not. You can only do one or the other each night.";
$en_US["roles"][] = "<bold>Ghost</bold>: If you're lucky enought to be a ghost, or rather unlucky enough, you can still chat after death!";
?>
