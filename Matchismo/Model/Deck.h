//
//  Deck.h
//  Matchismo
//
//  Created by ppl on 10/8/14.
//  Copyright (c) 2014 yy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
