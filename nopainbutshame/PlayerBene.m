//
//  PlayerBene.m
//  nopainbutshame
//
//  Created by Benedikt Beckmann on 19.05.12.
//  Copyright (c) 2012 BB. All rights reserved.
//

#import "PlayerBene.h"
#import "TexasHolemGame.h"

@interface PlayerBene ()
//for private functions
@end

@implementation PlayerBene

@synthesize playerName = _playerName;
@synthesize playerId = _playerId;
@synthesize moneyRest = _moneyRest;
//@synthesize avatar
@synthesize playerState = _playerState;
@synthesize playerRound = _playerRound;
@synthesize openCards = _openCards;
@synthesize twoCards = _twoCards;




-(void)setState{

}

-(NSArray *)getStates{
    return 0;
}

-(void)removeMoney:(int)amount{
    
}

-(void)getMoneyFromPot:(int)amount{
    
}


@end