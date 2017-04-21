topmovies[grep("[0-9]+", topmovies$name, ignore.case = T),"name"]
topmovies[grep("man", topmovies$name, ignore.case = T),"name"]
topmovies[grep("Star Wars", topmovies$name, ignore.case = T),"name"]
topmovies[grep("super", topmovies$name, ignore.case = T),"name"]
