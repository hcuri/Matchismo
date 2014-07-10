//
//  Card.m
//  Matchismo
//
//  Created by Hector Curi on 6/16/14.
//  Copyright (c) 2014 Curi Corp. All rights reserved.
//

#import "Card.h"

@implementation Card

-(int) match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards)
    {
        if([card.contents isEqualToString:self.contents])
        {
            score = 1;
        }
    }
    
    return score;
}

@end
