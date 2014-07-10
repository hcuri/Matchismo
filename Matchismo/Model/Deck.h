//
//  Deck.h
//  Matchismo
//
//  Created by Hector Curi on 6/16/14.
//  Copyright (c) 2014 Curi Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
