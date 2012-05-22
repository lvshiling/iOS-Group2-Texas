//
//  TexasHolemGame.h
//  nopainbutshame
//
//  Created by Benedikt Beckmann on 22.05.12.
//  Copyright (c) 2012 BioApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TexasHolemGame : NSObject

@property (nonatomic, weak) NSArray *players;
@property (nonatomic) int activePlayer;
@property (nonatomic) int maxPlayers;
@property (nonatomic) int bigBlind;
@property (nonatomic) int totalMoney;
@property (nonatomic) int betRoundNr;

-(void)activateNextPlayer;
-(int)getRoundNr;
-(void)setRoundNr;
-(BOOL)isShowDownTime;

@end
