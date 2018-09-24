//
//  Course.h
//  ModernObjC
//
//  Created by Michael De La Cruz on 9/24/18.
//  Copyright © 2018 Michael De La Cruz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Course : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSNumber *numberOfLessons;

@end

NS_ASSUME_NONNULL_END
