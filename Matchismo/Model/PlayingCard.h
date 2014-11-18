//
//  PlayingCard.h
//  Matchismo
//
//  Created by ppl on 10/8/14.
//  Copyright (c) 2014 yy. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;


@end