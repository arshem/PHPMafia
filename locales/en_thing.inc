<?php
// The Antarctic locale

// Roles
$en_thing["seer"]="Dog Handler";
$en_thing["wolf"]="Thing";
$en_thing["cursed"]="Loner";
$en_thing["drunk"]="Drunken Helicopter Pilot";
$en_thing["harlot"]="Lonely Worker";
$en_thing["traitor"]="Infiltrator";
$en_thing["gunner"]="Soldier";
$en_thing["crow"]="Snoop";
$en_thing["angel"]="Doctor";
$en_thing["detective"]="Researcher";
$en_thing["ghost"]="Ghost";
$en_thing["villager"]="Civilian Contractor";

$en_thing["seer_plural"]="Dog Handlers";
$en_thing["wolf_plural"]="Things";
$en_thing["cursed_plural"]="Cursed Civilians";
$en_thing["drunk_plural"]="Drunken Pilots";
$en_thing["harlot_plural"]="Lonely Researchers";
$en_thing["traitor_plural"]="Infiltrator";
$en_thing["gunner_plural"]="Soldiers";
$en_thing["crow_plural"]="Infiltrators";
$en_thing["angel_plural"]="Doctors";
$en_thing["detective_plural"]="Researcher";
$en_thing["ghost_plural"]="Ghosts";
$en_thing["villager_plural"]="Civilian Contractors";

// Before Game
$en_thing["game_start"]="<bold>%answer1%</bold> has started a game of THING. Type \".join\" to join. Type \".start\" to start the game. Type \".wait\" to increase join wait time.";
$en_thing["game_wait"]="Please wait at least %answer1% more seconds.";
$en_thing["game_required"]="%answer1%: Four or more players are required to play.";
$en_thing["game_welcome"]="%answer1%: Welcome to THING, the popular detective/social party game. Remember to read the .rules!";

// Night time
$en_thing["night_first"]="It is now night time. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning as you're probably a civilian contractor.";
$en_thing["night_turn"]="Day lasted <bold>%answer1%</bold>. It is now night in this section of Antarctica. All players check for PMs from me for instructions. If you did not receive one, simply sit back, relax, and wait patiently for morning.";
$en_thing["night_victim"]="The mob of scientists and workers drags a protesting <bold>%answer1%</bold> to a store room. They succumb to the will of the group, and are burned to death with a flamethrower. It is discovered they were a %answer2%.";

// Day time turn
$en_thing["day_turn"]="Night lasted <bold>%answer1%</bold>. It is now day time. The civilians awake, thankful for surviving the night, and search the base carefully. ";
$en_thing["day_victim"]="The scrapped clothing of <bold>%answer1%</bold>, a %answer2%, is found. Those remaining mourn their death.";
$en_thing["day_nokill"]="The body of a dog is found. All civilians, however, have survived.";
$en_thing["day_harlot"]="The Thing's selected victim was a lonely worker, but couldn't get the right opportunity to assimilate him/her.";
$en_thing["day_harlot_dead"]="<bold>%answer1%</bold>, a <bold>lonely worker</bold>, made the unfortunate mistake of visiting a Thing's bunk last night. Scrapped clothing is all that remains.";
$en_thing["day_angel"]="<bold>%answer1%</bold> was attacked by the Thing last night, but luckily, the doctor protected them and scared it off with a blast from a flamethrower!";
$en_thing["day_angel_dead"]="<bold>%answer1%</bold>, a <bold>doctor</bold> made the unfortunate mistake of guarding a thing last night, attempted to escape, but failed and is now dead. A bloody patch and shredded scrubs is all that's been found.";
$en_thing["day_vote"]="The civilians must now vote for whom to burn. One of you is a Thing! Humanity is at stake! Use \".lynch <nick>\" to cast your vote. %answer1% votes are required to burn the target";

// Game phase turning
$en_thing["night_warn"]="<bold>A few workers awake early and notice it is still dark outside. The night is almost over and there are still whispers heard in the research station.</bold>";
$en_thing["day_warn"]="<bold>As the sun sinks inexorably toward the horizon, turning the snowy fields into dark and forbidding wastelands, the civilians are reminded that very little time remains for them to reach a decision; if darkness falls before they have done so, the majority will win the vote. No one will be lynched if there are no votes or an even split.</bold>";

// Maintenance
$en_thing["idle_warn"]="%answer1%: <bold>You have been idling for a while. Please say something soon or you might be declared dead.</bold>";
$en_thing["idle_die"]="<bold>auror</bold> didn't get out of bed for a very long time. They are declared dead by suicide. Appears they were a <bold>sheriff</bold>.";

// Utilities
$en_thing["help"]="(notice) Commands: <bold>help, quit, stats, start, retract, goat, votes, lynch, wait, join, rules</bold>";
$en_thing["ping"]="PING! %answer1%";
$en_thing["coin_toss"]="<bold>%answer1%</bold> tosses a coin into the air...";
$en_thing["coin_land"]="The coin lands on <bold>%answer1%</bold>";
$en_thing["away"]="(notice) You are now marked as away.";
$en_thing["back"]="(notice) You are no longer marked as away.";
$en_thing["stats"]="%answer1%: <bold>%answer2%</bold> players: %answer3%";
$en_thing["stats_none"]="%answer1%: There are no players.";
$en_thing["stats_roles"]="%answer1%: There is %answer2%";
$en_thing["wait"]="<bold>%answer1%</bold> increased the wait time by %answer2% seconds.";
$en_thing["wait_reached"]="Limit has already been reached for extending the wait time.";
$en_thing["rules_part1"]="PHPMafia game rules: 1) Be nice to others. 2) Do not share information after death. 3) No bots allowed. 4) Do not play with clones.";
$en_thing["rules_part2"]="5) Do not quit unless you need to leave. 6) Do not paste PM's from the bot during the game. 7) Use common sense. 8) Waiting for timeouts is discouraged.";
$en_thing["votes"]="%answer1%: %answer2%";
$en_thing["votes_none"]="%answer1%: No votes yet.";
$en_thing["votes_status"]="%answer1%: <bold>%answer2%</bold> players, <bold>%answer3%</bold> votes required to lynch, <bold>%answer4%</bold> players available to vote.";
$en_thing["votes_night"]="Voting is only during the day.";
$en_thing["goat"]="<bold>%answer1%</bold>'s dog walks by and barks at <bold>%answer2%</bold>";

// Game commands
$en_thing["join"]="<bold>%answer1%</bold> has joined the game.";
$en_thing["quit"]="<bold>%answer1%</bold> died of hypothermia. They were a %answer2%.";
$en_thing["lynch"]="<bold>%answer1%</bold> votes for <bold>%answer2%</bold>.";
$en_thing["lynch_night"]="Lynching is only allowed during the day. Please wait patiently for morning.";
$en_thing["lynch_resting"]="%answer1%: You are wounded and resting, thus you are unable to vote for the day.";
$en_thing["retract"]="<bold>%answer1%</bold> retracted their vote.";
$en_thing["retract_not"]="You haven't voted yet.";

// Notices
$en_thing["game_none"]="No game is currently running.";
$en_thing["ratelimit"]="This command is rate-limited. Please wait a while before using it again.";
$en_thing["join_already_playing"]="You're already playing!";
$en_thing["start_ongoing"]="PHPMafia is already in play.";
$en_thing["not_playing"]="<bold>%answer1%</bold> is currently not playing.";
$en_thing["not_playing_self"]="You're not currently playing.";
$en_thing["not_admin"]="You are not an admin.";
$en_thing["away"]="You are now marked as away.";
$en_thing["not_away"]="You are not marked as away.";
$en_thing["back"]="You are no longer marked as away.";
$en_thing["parameters"]="Not enough parameters.";

// End Game
$en_thing["win_villagers"]="Game over! All the Thing copycats are dead! The civilians gather the dead aliens and burn them in a pile, burying the fused grotesque mockery of humanity under the torrent of Antarctic snowfall. Humanity is saved!.";
$en_thing["win_wolves"]="Game over! There are the same number of Things as civilians. The Things assimilate the survivors and kill the search team that's sent a month later to investigate the quiet research station. Stealing a helicopter, a Thing makes it to the mainland. Humanity is extinct and replaced within one hundred hours.";
$en_thing["end_times"]="Game lasted <bold>%answer1%</bold>. <bold>%answer2%</bold> was day. <bold>%answer3%</bold> was night.";

$en_thing["end_roles"]="The %answer1% was %answer2%.";
$en_thing["end_roles_plural"]="The %answer1% were %answer2%.";

// Directions
$en_thing["seer_assign"]="You are a <bold>Dog Handler</bold>. It is your job to detect hitmen using your trusty huskies! You may receive an anonymous tip once per night. Use \".see <nick>\" to see the role of a player. Remember to PM me your command.";
$en_thing["seer_see"]="You received a tip that <bold>%answer1%</bold> is a %answer2%!";
$en_thing["seer_see_not"]="Only a Dog Handler may use this command";
$en_thing["seer_seen"]="You may only get one tip per round.";
$en_thing["seer_see_self"]="You can't see yourself without a mirror. You don't have a mirror.";
$en_thing["seer_see_day"]="You only get tips at night.";

$en_thing["wolf_assign"]="You are a <bold>Thing</bold>. It is your job to kill and consume and assimilate all of the humans. Use \".kill <nick>\" to kill a civilian. Remember to PM me your command.";
$en_thing["wolf_multiple"]="Also, if you PM me, your message will be relayed to other Things.";
$en_thing["wolf_kill"]="You have selected <bold>%answer1%</bold> to be killed.";
$en_thing["wolf_kill_self"]="Suicide is bad. Don't do it.";
$en_thing["wolf_relay"]="<bold>%answer1%</bold> says: %answer2%";

$en_thing["drunk_assign"]="You have been drinking too much! You are the <bold>town drunk</bold>.";

$en_thing["harlot_assign"]="You are a <bold>lonely worker</bold>. You may spend the night with one person per round. If you visit a victim of a Thing, or visit a Thing, you will die. Use .visit to visit a player.";
$en_thing["harlot_visit"]="You are spending the night with <bold>%answer1%</bold>. Have a good time!";
$en_thing["harlot_visit_not"]="Only a town lonely worker may use this command.";
$en_thing["harlot_visit_self"]="You have chosen to stay home for the night.";
$en_thing["harlot_visited"]="You are already spending the night with <bold>%answer1%</bold>.";
$en_thing["harlot_day"]="You may only visit someone at night.";
$en_thing["harlot_dead"]="<bold>%answer1%<bold>, a <bold>lonely worker<bold>, made the unfortunate mistake of visiting the victim's bunkhouse last night and is now dead. A rogue body part and scrapped clothing is all that remains.";

$en_thing["traitor_assign"]="You are a <bold>Infiltrator</bold>. You are exactly like a villager and not even a sheriff can see your true identity. Only detectives can.";
$en_thing["traitor_transform"]="<bold>The civilians, during their celebrations, are frightened as they hear a body split and form into a horrendous alien visage! The Things are still here!</bold>";
$en_thing["traitor_notify"]="You receive a call to become a Thing!";
$en_thing["traitor_avenge"]="It is up to you to avenge your fallen brothers!";

$en_thing["gunner_assign"]="You hold a gun that shoots special incendiary bullets. You may only use it during the day. If you shoot a Thing, they will die instantly, but if you shoot a civilian, they will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution. You get %answer1% bullets.";
$en_thing["gunner_shoot"]="<bold>%answer1%</bold> shoots <bold>%answer2%</bold> with a incendiary bullet!";
$en_thing["gunner_shoot_wolf"]="<bold>%answer1%</bold> is a Thing, and is dying from a flaming bullet. The creature writhes and screams with such a horrifying sound!";
$en_thing["gunner_shoot_villager"]="<bold>%answer1%</bold> is a worker and is injured but will have a full recovery. They will be resting for the day.";
$en_thing["gunner_shoot_not"]="You don't have a gun.";
$en_thing["gunner_shoot_self"]="You are holding it the wrong way. Point Towards Enemy.";
$en_thing["gunner_nobullets"]="You don't have any more bullets.";
$en_thing["gunner_shoot_manslaughter"]="<bold>%answer1%</bold> is a not a Thing but was accidentally fatally injured.";
$en_thing["gunner_reveal"]="Appears they were a %answer1%.";
$en_thing["gunner_miss"]="<bold>%answer1%</bold> is a lousy shooter. They missed!";
$en_thing["gunner_suicide"]="<bold>%answer1%</bold> should clean their weapons more often. The gun exploded and killed themself!";
$en_thing["gunner_night"]="Shooting is only allowed during the day. Please wait patiently for morning.";

$en_thing["angel_assign"]="You are a <bold>doctor</bold>. It is your job to protect the civilians. If you guard a Thing, there is a 50/50 chance of you dying, if you guard a victim, they will live. Use .guard to guard a player.";
$en_thing["angel_guard"]="You are protecting <bold>%answer1%</bold> tonight. Farewell!";
$en_thing["angel_guard_notify"]="You can sleep well tonight, for a doctor is protecting you.";
$en_thing["angel_guard_not"]="Only a doctor may use this command.";
$en_thing["angel_guard_self"]="You may not guard yourself.";
$en_thing["angel_guarded"]="You are already protecting <bold>%answer1%.</bold>";
$en_thing["angel_day"]="You may only protect people at night.";

$en_thing["detective_assign"]="You are a <bold>Researcher</bold>.";
$en_thing["detective_assign2"]="It is your job to determine all the Things and Infiltrators by sticking a hot needle into a blood sample. Your job is during the day, and you can see the true identity of all users, even traitors.";
$en_thing["detective_assign3"]="But, each time you use your ability, you risk a 2/5 chance of having your identity revealed to the Things. So be careful. Use \".id\" to identify any player during the day.";
$en_thing["detective_id"]="The results of your investigation have returned. <bold>%answer1%</bold> is a... %answer2%!";
$en_thing["detective_id_not"]="Only a detective may use this command.";
$en_thing["detective_id_self"]="You may not id yourself."; // NOT OFFICIAL
$en_thing["detective_ided"]="You may only investigate one person per round.";
$en_thing["detective_night"]="You may only investigate people during the day.";
$en_thing["detective_revealed"]="<bold>%answer1%</bold> accidentally drops a blood slide. The blood slide reveals that they are a human researcher!";

$en_thing["crow_assign"]="You are a <bold>Snoop</bold>. You are able to sneak at night. Use \".kill <nick>\" to kill a civilian. Alternatively, you can use \".observe <nick>\" to check if someone is in bed or not. Observing will prevent you from participating in a killing.";
$en_thing["crow_observe"]="You down your sneak wear and sneak to <bold>%answer1%</bold>'s bunkhouse. You will return after collecting your observations when day begins.";
$en_thing["crow_observed"]="You are already sneaking to <bold>%answer1%</bold>'s house.";
$en_thing["crow_observe_self"]="Instead of doing that, you should probably go kill someone.";
$en_thing["crow_observe_wolf"]="Sneaking to a Thing's house is a waste of time. They're not there.";
$en_thing["crow_observe_day"]="You may only be a snoop at night.";
$en_thing["crow_not"]="Only a snoop may use this command.";
$en_thing["corw_killed"]="You have already selected <bold>%answer1%</bold> to be killed. You cannot kill and observe in the same night.";
$en_thing["crow_observed_stayed"]="As the sun rises, you conclude that <bold>%answer1%</bold> was sleeping all night long, and you sneak back to your house.";
$en_thing["crow_observed_got_up"]="As the sun rises, you conclude that <bold>%answer1%</bold> was not asleep all during the night, and you sneak back to your house.";

$en_thing["ghost_assign"] = "You are a ghost. You will remain in the world of the living to finish your business. Happy haunting!";
$en_thing["ghost_transform"] = "It appears that <bold>%answer1%</bold> came back as a ghost, forever trapped in the icy wastelands of Antarctica! They will remain in the game.";
$en_thing["roles"][] = "<bold>".$en_thing["wolf"]."</bold>: Someone who tries to kill anyone they can get their hands on.";
$en_thing["roles"][] = "<bold>".$en_thing["seer"]."</bold>: ".$en_thing["seer"]." can see one person each day to see their role. Careful though, they can be misled.";
$en_thing["roles"][] = "<bold>".$en_thing["harlot"]."</bold>: You may spend the night with one person per round. If you visit a victim of a ".$en_thing["wolf"].", or visit a ".$en_thing["wolf"].", you will die.";
$en_thing["roles"][] = "<bold>".$en_thing["angel"]."</bold>: It is your job to protect the ".$en_thing["villager"].". If you guard a ".$en_thing["wolf"].", there is a 50/50 chance of you dying, if you guard a victim, they will live.";
$en_thing["roles"][] = "<bold>".$en_thing["drunk"]."</bold>: I wanna go drunk, ".$en_thing["seer"].", I'm home.";
$en_thing["roles"][] = "<bold>".$en_thing["villager"]."</bold>: Nothing to see here...you do nothing special.";
$en_thing["roles"][] = "<bold>".$en_thing["gunner"]."</bold>: You hold a gun that shoots special homing bullets. You may only use it during the day. If you shoot a ".$en_thing["wolf"].", they will die instantly, but if you shoot a ".$en_thing["villager"].", they will likely survive. There is also the possibility of the gun blowing up, and killing you with it, so take caution.";
$en_thing["roles"][] = "<bold>".$en_thing["detective"]."</bold>: It is your job to determine all the ".$en_thing["wolf"]." and ".$en_thing["traitor"].". Your job is during the day, and you can see the true identity of all users, even ".$en_thing["traitor"]."."; 
$en_thing["roles"][] = "<bold>".$en_thing["traitor"]."</bold>: You are exactly like a ".$en_thing["villager"]." and not even a ".$en_thing["seer"]." can see your true identity. Only ".$en_thing["detective"]." can. You turn into a ".$en_thing["wolf"]." once they are all lynched.";
$en_thing["roles"][] = "<bold>".$en_thing["crow"]."</bold>: You are able to sneak at night. You can kill a ".$en_thing["villager"]." or you can see if they are in bed or not. You can only do one or the other each night.";
$en_thing["roles"][] = "<bold>Ghost</bold>: If you're lucky enought to be a ghost, or rather unlucky enough, you can still chat after death!";

