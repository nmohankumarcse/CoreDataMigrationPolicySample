//
//  SampleMigrationV1toV2.h
//  CoreDataMigrationPolicty
//
//  Created by Mohankumar on 23/10/17.
//  Copyright © 2017 Mohankumar. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface SampleMigrationV1toV2 : NSEntityMigrationPolicy
-(NSString *)convertNumberToString:(NSNumber *)number;
@end

