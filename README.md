# Pokémon Emerald: bear Edition

Just my project aimed at improving Pokemon Emerald. This is based on - and wouldn't be made possible without - the [pokeemerald](https://github.com/pret/pokeemerald) disassembly by PRET.

All Pokemon up to Gen. 4 will be obtainable.

The battle engine balance is completely changed from Gen. 3 - expect a feel more like Gen. 4 or 5.

This is inspired, of course, by the many hacks of [Drayano60](https://twitter.com/drayano60). It is also influenced by [Altered Emerald](https://www.pokecommunity.com/showthread.php?t=386229) and it's interesting expansions to the land of Hoenn.

## Information

### Notable Features

[Battle Engine Upgrade](https://www.pokecommunity.com/showthread.php?t=417820) - *Physical / Special Split* | *Moves, Abilities, Pokémon and Items from new gens* | *Updated Learnsets* | *Fairy Typing* | *Ability pop-ups* | *Exp points on catching* | *Faster battle intro* | *Mega Evolutions* | *Mid-battle Trainer messages* | and more...\
[Day & Night Cycle](https://github.com/Xhyzi/pokeemerald/tree/day-and-night)\
and [Morning/Day/Evening/Night encounters](https://www.pokecommunity.com/showpost.php?p=10450677)\
[Following Pokemon (except Shellos, Gastrodon and Porygon-Z -- WIP)](https://github.com/W1serV1ser/pokeemerald/tree/FollowingPokemon)\
[Unbound Quest Menu](https://www.pokecommunity.com/showthread.php?p=10528414#post10528414)

### Other Features

[Most Gen 1-3 Pokemon as Surf Sprites](https://github.com/surskitty/pokeemerald/wiki#surfable)\
[Soft Level Scaling on Wild Pokemon](https://www.pokecommunity.com/showpost.php?p=10356613)\
[DP/Pt-Style Pokemon Summary Screen](https://github.com/citrusbolt/pokeemerald/tree/summary_screen)\
[Decapitzalized Text and Dialogue](https://github.com/ProfLeonDias/pokeemerald/tree/decapitalization)\
[FR/LG Object Textcolor Commands](https://github.com/pret/pokeemerald/wiki/Implementing-the-%E2%80%9Ctextcolor%E2%80%9D-script-command-from-FRLG-and-give-object-events-their-own-text-colour)\
[Additional Bag Sounds from FR/LG](https://www.pokecommunity.com/showpost.php?p=10205757)\
[Expanded Options Menu](https://www.pokecommunity.com/showpost.php?p=10275248)\
[Unlimited TM Usage](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage)\
[HMs are Forgettable](https://www.pokecommunity.com/showpost.php?p=10182839&postcount=119)\
[Physical Special Split Icons In Battle](https://www.pokecommunity.com/showthread.php?p=10527471#post10527471)\
[RHH Intro Credits](https://github.com/Xhyzi/pokeemerald/tree/rhh-intro-credits)\
[HG/SS-Style Overworld Shadows](https://github.com/aarant/pokeemerald/commit/12e3b4efadafdef43bba26ca1ce897135808779c)\
[Faster Text Speed Options](https://www.pokecommunity.com/showthread.php?p=10400198#post10400198)\
[Newer Gen. Poke Mart Premier Balls](https://github.com/pret/pokeemerald/wiki/LGPE-Style-Bonus-Premier-Balls)\
[Move Pokemon as First Pokemon Storage Option](https://www.pokecommunity.com/showpost.php?p=10065761)\
[Togglable 2-in-1 Bike by Pressing R (Use the Acro Bike)](https://www.pokecommunity.com/showpost.php?p=10217718&postcount=172)

### Engine Fixes

[Improved WaitForVBlank Functioning (improving battery/performance)](https://github.com/pret/pokeemerald/wiki/Improving-the-WaitForVBlank-function)\
[Faster HP Drain](https://github.com/pret/pokeemerald/wiki/Faster-HP-Drain)\
[More Optimized Summary Screen](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen)\
[Removed Functionally Redundant Move Grammar Tables](https://github.com/pret/pokeemerald/wiki/Remove-the-functionally-redundant-move-grammar-tables)

### Dev Features

~~[Debug Menu (requires game to be built as 'make DDEBUGGING=1')](https://github.com/pret/pokeemerald/wiki/Add-a-debug-menu)~~ Once again a WIP

## Bugs

Following Pokemon don't have shadows.

Very large following Pokemon sprites (Regigigas) sometimes clip through tiles.

Nighttime lights in Oldale Town turn 'off' when entering town connection.

~~Spawns a duplicate of the player when it should be their starter follower, but only in Prof. Birch's lab. Likely caused by commit [2353c2a52563eee98be762666c09a14cc7156e42](https://github.com/ebears/emerald-dx/commit/2353c2a52563eee98be762666c09a14cc7156e42).~~

- ~~Commit [ffd4e9cc79dd7e45042dcf48ffb5022afbc17cd7](https://github.com/ebears/emerald-dx/commit/ffd4e9cc79dd7e45042dcf48ffb5022afbc17cd7) seems to have remedied this problem, now the following Pokemon appears correctly but makes half the player sprite invisible for a half second.~~

    - ~~Commit [2230a49602f6ac2090c01436ff2dc033861488fb](https://github.com/ebears/emerald-dx/commit/2230a49602f6ac2090c01436ff2dc033861488fb) reintroduced the original bug.~~


## Credits

Everyone from [PRET](https://github.com/pret)\
Everyone from [rh-hideout](https://github.com/rh-hideout)\
[huderlem](https://github.com/huderlem)\
[GriffinRichards](https://github.com/GriffinRichards)\
[DizzyEgg](https://github.com/DizzyEggg)\
[Avara](https://www.pokecommunity.com/member.php?u=294199)\
[LOuroboros](https://github.com/LOuroboros)\
[AsparagusEduardo](https://github.com/AsparagusEduardo)\
[NotToDisturb](https://github.com/NotToDisturb)\
[Skeli789](https://github.com/Skeli789)\
[ghoulslash](https://github.com/ghoulslash)\
[SamuRH/Xhizy](https://github.com/Xhyzi)\
[ProfLeonDias](https://github.com/ProfLeonDias)\
[Anon822](https://www.pokecommunity.com/member.php?u=699429)\
[W1serV1ser](https://github.com/W1serV1ser)\
[PokemonSanFran](https://github.com/PokemonSanFran)\
[ellabrella](https://www.pokecommunity.com/member.php?u=751712)\
[aarant](https://github.com/aarant)\
[Syreldar](https://www.pokecommunity.com/member.php?u=766687)\
[TheXaman](https://www.pokecommunity.com/member.php?u=743189)\
[surskitty](https://www.pokecommunity.com/member.php?u=922491)\
JaizuFangaming#2172\
Citrus Bolt#4642

...and everyone else in the Pokémon decompilation community. Thank you.
