#!/usr/bin/ruby
#Looks like not working on ideone
puts "#!/usr/bin/env falcon -M"
puts "load process"
print "system(\"ruby -e '"
$<.each{|e|
	l=e.strip
	break if l=='__END__'
	print l.gsub('"','\"').gsub("'",'\"')+';' if !l.start_with?('#')
}
puts "'\")"