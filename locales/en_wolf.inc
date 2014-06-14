<?php
// The English locale

// Roles
$en_wolf["seer"]="seer";
$en_wolf["wolf"]="wolf";
$en_wolf["cursed"]="cursed villager";
$en_wolf["drunk"]="village drunk";
$en_wolf["harlot"]="harlot";
$en_wolf["traitor"]="traitor";
$en_wolf["gunner"]="gunner";
$en_wolf["crow"]="crow";
$en_wolf["angel"]="guardian angel";
$en_wolf["detective"]="detective";
$en_wolf["ghost"]="ghost";
$en_wolf["villager"]="villager";

$en_wolf["seer_plural"]="seers";
$en_wolf["wolf_plural"]="wolves";
$en_wolf["cursed_plural"]="cursed villagers";
$en_wolf["drunk_plural"]="drunk villagers";
$en_wolf["harlot_plural"]="harlots";
$en_wolf["traitor_plural"]="traitors";
$en_wolf["gunner_plural"]="gunners";
$en_wolf["crow_plural"]="crows";
$en_wolf["angel_plural"]="guardian angels";
$en_wolf["detective_plural"]="detectives";
$en_wolf["ghost_plural"]="ghosts";
$en_wolf["villager_plural"]="villagers";

// Before Game
$en_wolf["game_start"]="<bold>%answer1%</bold> has started a game of Werewolf. Type \".join\" to join. Type \".start\" to start the game. Type \".wait\" to increase join wait time.";
$en_wolf["game_wait"]="Please wait at least %answer1% more seconds.";
$en_wolf["game_required"]="%answer1%: Four or more players are required to play.";
$en_wolf["game_welcome"]="%answer1%: Welcome to Werewolf, the popular detective/social party game (a theme of Mafia).";

// Night time
$en_wolf["night_first"]="It is now nighttime. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning.";
$en_wolf["night_turn"]="Day lasted <bold>%answer1%</bold>. It is now nighttime. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning.";
$en_wolf["night_victim"]="The mob drags a protesting <bold>%answer1%</bold> to the hanging tree. S/He succumbs to the will of the horde, and is hanged. It is discovered (s)he was a %answer2%.";

// Day time turn
$en_wolf["day_turn"]="Night lasted <bold>%answer1%</bold>. It is now daytime. The villagers awake, thankful for surviving the night, and search the village... ";
$en_wolf["day_victim"]="The dead body of <bold>%answer1%</bold>, a %answer2%, is found. Those remaining mourn his/her death.";
$en_wolf["day_nokill"]="The body of a young penguin pet is found. All villagers, however, have survived.";
$en_wolf["day_harlot"]="The wolves' selected victim was a harlot, but she wasn't home.";
$en_wolf["day_harlot_dead"]="<bold>%answer1%</bold>, a <bold>harlot</bold>, made the unfortunate mistake of visiting a wolf's house last night and is now dead.";
$en_wolf["day_angel"]="<bold>%answer1%</bold> was attacked by the wolves last night, but luckily, the guardian angel protected him/her.";
$en_wolf["day_angel_dead"]="<bold>%answer1%</bold>, a <bold>guardian angel</bold> made the unfortunate mistake of guarding a wolf last night, attempted to escape, but failed and is now dead.";
$en_wolf["day_vote"]="The villagers must now vote for whom to lynch. Use \".lynch <nick>\" to cast your vote. %answer1% votes are required to lynch.";

// Game phase turning
$en_wolf["night_warn"]="<bold>A few villagers awake early and notice it is still dark outside. The night is almost over and there are still whispers heard in the village.</bold>";
$en_wolf["day_warn"]="<bold>As the sun sinks inexorably toward the horizon, turning the lanky pine trees into fire-edged silhouettes, the villagers are reminded that very little time remains for them to reach a decision; if darkness falls before they have done so, the majority will win the vote. No one will be lynched if there are no votes or an even split.</bold>";

// Maintenance
$en_wolf["idle_warn"]="%answer1%: <bold>You have been idling for a while. Please say something soon or you might be declared dead.</bold>";
$en_wolf["idle_die"]="<bold>auror</bold> didn't get out of bed for a very long time. S/He is declared dead. Appears (s)he was a <bold>seer</bold>.";

// Utilities
$en_wolf["help"]="(notice) Commands: <bold>help, quit, stats, start, retract, goat, votes, lynch, coin, wait, join, rules, cookies, 8ball</bold>";
$en_wolf["adminhelp"] = "(notice) Commands: <bold>fjoin, fquit, fnight, fday, fping, fstart, fgoat, fwait</bold>";
$en_wolf["ping"]="PING. %answer1%";
$en_wolf["coin_toss"]="<bold>%answer1%</bold> tosses a coin into the air...";
$en_wolf["coin_land"]="The coin lands on <bold>%answer1%</bold>";
$en_wolf["away"]="(notice) You are now marked as away.";
$en_wolf["back"]="(notice) You are no longer marked as away.";
$en_wolf["stats"]="%answer1%: <bold>%answer2%</bold> players: %answer3%";
$en_wolf["stats_none"]="%answer1%: There are no players.";
$en_wolf["stats_roles"]="%answer1%: There is %answer2%";
$en_wolf["wait"]="<bold>%answer1%</bold> increased the wait time by %answer2% seconds.";
$en_wolf["wait_reached"]="Limit has already been reached for extending the wait time.";
$en_US["rules_part1"]="PHPMafia game rules: 1) Be nice to others. 2) Do not share information after death. 3) No bots allowed. 4) Do not play with clones.";
$en_US["rules_part2"]="5) Do not quit unless you need to leave. 6) Do not paste PM's from the bot during the game. 7) Use common sense. 8) Waiting for timeouts is discouraged.";
$en_wolf["votes"]="%answer1%: %answer2%";
$en_wolf["votes_none"]="%answer1%: No votes yet.";
$en_wolf["votes_status"]="%answer1%: <bold>%answer2%</bold> players, <bold>%answer3%</bold> votes required to lynch, <bold>%answer4%</bold> players available to vote.";
$en_wolf["votes_night"]="Voting is only during the day.";
$en_wolf["goat"]="<bold>%answer1%</bold>'s goat walks by and kicks <bold>%answer2%</bold>";

// Game commands
$en_wolf["join"]="<bold>%answer1%</bold> has joined the game.";
$en_wolf["quit"]="<bold>%answer1%</bold> died of an unknown disease. S/He was a %answer2%.";
$en_wolf["lynch"]="<bold>%answer1%</bold> votes for <bold>%answer2%</bold>.";
$en_wolf["lynch_night"]="Lynching is only allowed during the day. Please wait patiently for morning.";
$en_wolf["lynch_resting"]="%answer1%: You are wounded and resting, thus you are unable to vote for the day.";
$en_wolf["retract"]="<bold>%answer1%</bold> retracted his/her vote.";
$en_wolf["retract_not"]="You haven't voted yet.";

// Notices
$en_wolf["game_none"]="No game is currently running.";
$en_wolf["ratelimit"]="This command is rate-limited. Please wait a while before using it again.";
$en_wolf["join_already_playing"]="You're already playing.";
$en_wolf["start_ongoing"]="Werewolf is already in play.";
$en_wolf["not_playing"]="<bold>%answer1%</bold> is currently not playing.";
$en_wolf["not_playing_self"]="You're not currently playing.";
$en_wolf["not_admin"]="You are not an admin.";
$en_wolf["away"]="You are now marked as away.";
$en_wolf["not_away"]="You are not marked as away.";
$en_wolf["back"]="You are no longer marked as away.";
$en_wolf["parameters"]="Not enough parameters.";

// End Game
$en_wolf["win_villagers"]="Game over. All the wolves are dead. The villagers chop them up, BBQ them, and have a hearty meal.";
$en_wolf["win_wolves"]="Game over. There are the same number of wolves as villagers. The wolves eat everyone and win.";
$en_wolf["end_times"]="Game lasted <bold>%answer1%</bold>. <bold>%answer2%</bold> was day. <bold>%answer3%</bold> was night.";
//The wolves were moriarty and Nascar1996
$en_wolf["end_roles"]="The %answer1% was %answer2%.";
$en_wolf["end_roles_plural"]="The %answer1% were %answer2%.";

// Directions
$en_wolf["seer_assign"]="You are a <bold>seer</bold>. It is your job to detect the wolves, you may have a vision once per night. Use \"see <nick>\" to see the role of a player.";
$en_wolf["seer_see"]="You have a vision; in this vision, you see that <bold>%answer1%</bold> is a %answer2%.";
$en_wolf["seer_see_not"]="Only a seer may use this command";
$en_wolf["seer_seen"]="You may only have one vision per round.";
$en_wolf["seer_see_self"]="You can't see yourself without a mirror. You don't have a mirror.";
$en_wolf["seer_see_day"]="You may only have visions at night.";

$en_wolf["wolf_assign"]="You are a <bold>wolf</bold>. It is your job to kill all the villagers. Use \"kill <nick>\" to kill a villager.";
$en_wolf["wolf_multiple"]="Also, if you PM me, your message will be relayed to other wolves.";
$en_wolf["wolf_kill"]="You have selected <bold>%answer1%</bold> to be killed.";
$en_wolf["wolf_kill_self"]="Suicide is bad. Don't do it.";
$en_wolf["wolf_relay"]="<bold>%answer1%</bold> says: %answer2%";

$en_wolf["drunk_assign"]="You have been drinking too much. You are the <bold>village drunk</bold>.";

$en_wolf["harlot_assign"]="You are a <bold>harlot</bold>. You may spend the night with one person per round. If you visit a victim of a wolf, or visit a wolf, you will die. Use .visit to visit a player.";
$en_wolf["harlot_visit"]="You are spending the night with <bold>%answer1%</bold>. Have a good time.";
$en_wolf["harlot_visit_not"]="Only a harlot may use this command.";
$en_wolf["harlot_visit_self"]="You have chosen to stay home for the night.";
$en_wolf["harlot_visited"]="You are already spending the night with <bold>%answer1%</bold>.";
$en_wolf["harlot_day"]="You may only visit someone at night.";
$en_wolf["harlot_dead"]="<bold>%answer1%<bold>, a <bold>harlot<bold>, made the unfortunate mistake of visiting the victim's house last night and is now dead.";

$en_wolf["traitor_assign"]="You are a <bold>traitor</bold>. You are exactly like a villager and not even a seer can see your true identity. Only detectives can.";
$en_wolf["traitor_transform"]="<bold>The villagers, during their celebrations, are frightened as they hear a loud howl. The wolves are not gone.</bold>";
$en_wolf["traitor_notify"]="HOOOOOOOOOWL. You have become... a wolf.";
$en_wolf["traitor_avenge"]="It is up to you to avenge your fallen leaders.";

$en_wolf["gunner_assign"]="You hold a gun that shoots special silver bullets. You may only use it during the day. If you shoot a wolf, (s)he will die instantly, but if you shoot a villager, that villager will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution. You get %answer1% bullets.";
$en_wolf["gunner_shoot"]="<bold>%answer1%</bold> shoots <bold>%answer2%</bold> with a silver bullet.";
$en_wolf["gunner_shoot_wolf"]="<bold>%answer1%</bold> is a wolf, and is dying from the silver bullet.";
$en_wolf["gunner_shoot_villager"]="<bold>%answer1%</bold> is a villager and is injured but will have a full recovery. S/He will be resting for the day.";
$en_wolf["gunner_shoot_not"]="You don't have a gun.";
$en_wolf["gunner_shoot_self"]="You are holding it the wrong way.";
$en_wolf["gunner_nobullets"]="You don't have any more bullets.";
$en_wolf["gunner_shoot_manslaughter"]="<bold>%answer1%</bold> is a not a wolf but was accidentally fatally injured.";
$en_wolf["gunner_reveal"]="Appears (s)he was a %answer1%.";
$en_wolf["gunner_miss"]="<bold>%answer1%</bold> is a lousy shooter. S/He missed.";
$en_wolf["gunner_suicide"]="<bold>%answer1%</bold> should clean his/her weapons more often. The gun exploded and killed him/her.";
$en_wolf["gunner_night"]="Shooting is only allowed during the day. Please wait patiently for morning.";

$en_wolf["angel_assign"]="You are a <bold>guardian angel</bold>. It is your job to protect the villagers. If you guard a wolf, there is a 50/50 chance of you dying, if you guard a victim, they will live. Use .guard to guard a player.";
$en_wolf["angel_guard"]="You are protecting <bold>%answer1%</bold> tonight. Farewell.";
$en_wolf["angel_guard_notify"]="You can sleep well tonight, for a guardian angel is protecting you.";
$en_wolf["angel_guard_not"]="Only a guardian angel may use this command.";
$en_wolf["angel_guard_self"]="You may not guard yourself.";
$en_wolf["angel_guarded"]="You are already protecting <bold>%answer1%.</bold>";
$en_wolf["angel_day"]="You may only protect people at night.";

$en_wolf["detective_assign"]="You are a <bold>detective</bold>.";
$en_wolf["detective_assign2"]="It is your job to determine all the wolves and traitors. Your job is during the day, and you can see the true identity of all users, even traitors.";
$en_wolf["detective_assign3"]="But, each time you use your ability, you risk a 2/5 chance of having your identity revealed to the wolves. So be careful. Use \".id\" to identify any player during the day.";
$en_wolf["detective_id"]="The results of your investigation have returned. <bold>%answer1%</bold> is a... %answer2%.";
$en_wolf["detective_id_not"]="Only a detective may use this command.";
$en_wolf["detective_id_self"]="You may not id yourself."; // NOT OFFICIAL
$en_wolf["detective_ided"]="You may only investigate one person per round.";
$en_wolf["detective_night"]="You may only investigate people during the day.";
$en_wolf["detective_revealed"]="<bold>%answer1%</bold> accidentally drops a paper. The paper reveals that (s)he is the detective.";

$en_wolf["crow_assign"]="You are a <bold>werecrow</bold>. You are able to fly at night. Use \"kill <nick>\" to kill a a villager. Alternatively, you can use \"observe <nick>\" to check if someone is in bed or not. Observing will prevent you from participating in a killing.";
$en_wolf["crow_observe"]="You transform into a large crow and start your flight to <bold>%answer1%</bold>'s house. You will return after collecting your observations when day begins.";
$en_wolf["crow_observed"]="You are already flying to <bold>%answer1%</bold>'s house.";
$en_wolf["crow_observe_self"]="Instead of doing that, you should probably go kill someone.";
$en_wolf["crow_observe_wolf"]="Flying to another wolf's house is a waste of time.";
$en_wolf["crow_observe_day"]="You may only transform into a crow at night.";
$en_wolf["crow_not"]="Only a werecrow may use this command.";
$en_wolf["corw_killed"]="You have already selected <bold>%answer1%</bold> to be killed. You cannot kill and observe in the same night.";
$en_wolf["crow_observed_stayed"]="As the sun rises, you conclude that <bold>%answer1%</bold> was sleeping all night long, and you fly back to your house.";
$en_wolf["crow_observed_got_up"]="As the sun rises, you conclude that <bold>%answer1%</bold> was not asleep all during the night, and you fly back to your house.";

$en_wolf["ghost_assign"] = "You are a ghost. You will remain in the world of the living to finish your business. Happy haunting.";
$en_wolf["ghost_transform"] = "It appears that <bold>%answer1%</bold> came back as a ghost. Ooooh-OOOOH-Ooooh. S/He will remain in the game.";

$en_wolf["players_list"]="Players: %answer1%";

$en_wolf["roles"][] = "<bold>".$en_wolf["wolf"]."</bold>: Someone who tries to kill anyone they can get their hands on.";
$en_wolf["roles"][] = "<bold>".$en_wolf["seer"]."</bold>: ".$en_wolf["seer"]." can see one person each day to see their role. Careful though, they can be misled.";
$en_wolf["roles"][] = "<bold>".$en_wolf["harlot"]."</bold>: You may spend the night with one person per round. If you visit a victim of a ".$en_wolf["wolf"].", or visit a ".$en_wolf["wolf"].", you will die.";
$en_wolf["roles"][] = "<bold>".$en_wolf["angel"]."</bold>: It is your job to protect the ".$en_wolf["villager"].". If you guard a ".$en_wolf["wolf"].", there is a 50/50 chance of you dying, if you guard a victim, they will live.";
$en_wolf["roles"][] = "<bold>".$en_wolf["drunk"]."</bold>: I wanna go drunk, ".$en_wolf["seer"].", I'm home.";
$en_wolf["roles"][] = "<bold>".$en_wolf["villager"]."</bold>: Nothing to see here...you do nothing special.";
$en_wolf["roles"][] = "<bold>".$en_wolf["gunner"]."</bold>: You hold a gun that shoots special homing bullets. You may only use it during the day. If you shoot a ".$en_wolf["wolf"].", they will die instantly, but if you shoot a ".$en_wolf["villager"].", they will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution.";
$en_wolf["roles"][] = "<bold>".$en_wolf["detective"]."</bold>: It is your job to determine all the ".$en_wolf["wolf"]." and ".$en_wolf["traitor"].". Your job is during the day, and you can see the true identity of all users, even ".$en_wolf["traitor"]."."; 
$en_wolf["roles"][] = "<bold>".$en_wolf["traitor"]."</bold>: You are exactly like a ".$en_wolf["villager"]." and not even a ".$en_wolf["seer"]." can see your true identity. Only ".$en_wolf["detective"]." can. You turn into a ".$en_wolf["wolf"]." once they are all lynched.";
$en_wolf["roles"][] = "<bold>".$en_wolf["crow"]."</bold>: You are able to sneak at night. You can kill a ".$en_pir["villager"]." or you can see if they are in bed or not. You can only do one or the other each night.";
$en_wolf["roles"][] = "<bold>Ghost</bold>: If you're lucky enought to be a ghost, or rather unlucky enough, you can still chat after death.";
?>