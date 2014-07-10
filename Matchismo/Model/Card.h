//
//  Card.h
//  Matchismo
//
//  Created by Hector Curi on 6/16/14.
//  Copyright (c) 2014 Curi Corp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

-(int) match:(NSArray *) otherCards;

@end
